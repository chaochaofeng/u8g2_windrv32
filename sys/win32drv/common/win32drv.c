/**
 * @file win32drv.c
 *
 */

/*********************
 *      INCLUDES
 *********************/

#include "sys/win32drv/common/win32drv.h"

#if USE_WIN32DRV

#include <windowsx.h>
#include <process.h>
#include <stdbool.h>
#include <stdint.h>

/*********************
 *      DEFINES
 *********************/

#define WINDOW_EX_STYLE \
    WS_EX_CLIENTEDGE

#define WINDOW_STYLE \
    (WS_OVERLAPPEDWINDOW & ~(WS_SIZEBOX | WS_MAXIMIZEBOX | WS_THICKFRAME))

#ifndef WIN32DRV_MONITOR_ZOOM
#define WIN32DRV_MONITOR_ZOOM 1
#endif

#ifndef USER_DEFAULT_SCREEN_DPI
#define USER_DEFAULT_SCREEN_DPI 96
#endif

/**********************
 *      TYPEDEFS
 **********************/

typedef struct _WINDOW_THREAD_PARAMETER
{
    HANDLE window_mutex;
    HINSTANCE instance_handle;
    HICON icon_handle;
    uint32_t hor_res;
    uint32_t ver_res;
    int show_window_mode;
} WINDOW_THREAD_PARAMETER, * PWINDOW_THREAD_PARAMETER;

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**
 * @brief Creates a B8G8R8A8 frame buffer.
 * @param WindowHandle A handle to the window for the creation of the frame
 *                     buffer. If this value is NULL, the entire screen will be
 *                     referenced.
 * @param Width The width of the frame buffer.
 * @param Height The height of the frame buffer.
 * @param PixelBuffer The raw pixel buffer of the frame buffer you created.
 * @param PixelBufferSize The size of the frame buffer you created.
 * @return If the function succeeds, the return value is a handle to the device
 *         context (DC) for the frame buffer. If the function fails, the return
 *         value is NULL, and PixelBuffer parameter is NULL.
*/
static HDC u8g2_win32_create_frame_buffer(
    _In_opt_ HWND WindowHandle,
    _In_ LONG Width,
    _In_ LONG Height,
    _Out_ UINT32** PixelBuffer,
    _Out_ SIZE_T* PixelBufferSize);

/**
 * @brief Enables WM_DPICHANGED message for child window for the associated
 *        window.
 * @param WindowHandle The window you want to enable WM_DPICHANGED message for
 *                     child window.
 * @return If the function succeeds, the return value is non-zero. If the
 *         function fails, the return value is zero.
 * @remarks You need to use this function in Windows 10 Threshold 1 or Windows
 *          10 Threshold 2.
*/
static BOOL u8g2_win32_enable_child_window_dpi_message(
    _In_ HWND WindowHandle);

/**
 * @brief Registers a window as being touch-capable.
 * @param hWnd The handle of the window being registered.
 * @param ulFlags A set of bit flags that specify optional modifications.
 * @return If the function succeeds, the return value is nonzero. If the
 *         function fails, the return value is zero.
 * @remark For more information, see RegisterTouchWindow.
*/
static BOOL u8g2_win32_register_touch_window(
    HWND hWnd,
    ULONG ulFlags);

/**
 * @brief Retrieves detailed information about touch inputs associated with a
 *        particular touch input handle.
 * @param hTouchInput The touch input handle received in the LPARAM of a touch
 *                    message.
 * @param cInputs The number of structures in the pInputs array.
 * @param pInputs A pointer to an array of TOUCHINPUT structures to receive
 *                information about the touch points associated with the
 *                specified touch input handle.
 * @param cbSize The size, in bytes, of a single TOUCHINPUT structure.
 * @return If the function succeeds, the return value is nonzero. If the
 *         function fails, the return value is zero.
 * @remark For more information, see GetTouchInputInfo.
*/
static BOOL u8g2_win32_get_touch_input_info(
    HTOUCHINPUT hTouchInput,
    UINT cInputs,
    PTOUCHINPUT pInputs,
    int cbSize);

/**
 * @brief Closes a touch input handle, frees process memory associated with it,
          and invalidates the handle.
 * @param hTouchInput The touch input handle received in the LPARAM of a touch
 *                    message.
 * @return If the function succeeds, the return value is nonzero. If the
 *         function fails, the return value is zero.
 * @remark For more information, see CloseTouchInputHandle.
*/
static BOOL u8g2_win32_close_touch_input_handle(
    HTOUCHINPUT hTouchInput);

/**
 * @brief Returns the dots per inch (dpi) value for the associated window.
 * @param WindowHandle The window you want to get information about.
 * @return The DPI for the window.
*/
static UINT u8g2_win32_get_dpi_for_window(
    _In_ HWND WindowHandle);


static LRESULT CALLBACK u8g2_win32_window_message_callback(
    HWND   hWnd,
    UINT   uMsg,
    WPARAM wParam,
    LPARAM lParam);

static unsigned int __stdcall u8g2_win32_window_thread_entrypoint(
    void* raw_parameter);


/**********************
 *  GLOBAL VARIABLES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

static HWND g_window_handle = NULL;

static HDC g_buffer_dc_handle = NULL;
static UINT32* g_pixel_buffer = NULL;
static SIZE_T g_pixel_buffer_size = 0;

static bool volatile g_display_refreshing = false;

static bool volatile g_mouse_pressed = false;
static LPARAM volatile g_mouse_value = 0;

static bool volatile g_mousewheel_pressed = false;
static int16_t volatile g_mousewheel_value = 0;

static bool volatile g_keyboard_pressed = false;
static WPARAM volatile g_keyboard_value = 0;

static int volatile g_dpi_value = USER_DEFAULT_SCREEN_DPI;

EXTERN_C int win32_quit_signal = false;

/*========================================================*/
/* framebuffer struct */

struct _u8x8_win32drv_struct
{
	u8x8_msg_cb u8x8_bitmap_display_old_cb;
	int fbfd;
	uint32_t width;
	uint32_t height;
	uint8_t *u8x8_buf;
	uint8_t *u8g2_buf;
	uint8_t *fbp;
    uint32_t bits_per_pixel;
	uint32_t active_color;
    uint32_t bg_color;
};

typedef struct _u8x8_win32drv_struct u8x8_win32drv_t;

/*========================================================*/
/* global objects for the framebuffer */

static u8x8_win32drv_t u8x8_win32drv;
static u8x8_display_info_t u8x8_libuxfb_info =
{
	/* chip_enable_level = */ 0,
	/* chip_disable_level = */ 1,

	/* post_chip_enable_wait_ns = */ 0,
	/* pre_chip_disable_wait_ns = */ 0,
	/* reset_pulse_width_ms = */ 0,
	/* post_reset_wait_ms = */ 0,
	/* sda_setup_time_ns = */ 0,
	/* sck_pulse_width_ns = */ 0,
	/* sck_clock_hz = */ 4000000UL,
	/* spi_mode = */ 1,
	/* i2c_bus_clock_100kHz = */ 0,
	/* data_setup_time_ns = */ 0,
	/* write_pulse_width_ns = */ 0,
	/* tile_width = */ 8,		/* dummy value */
	/* tile_hight = */ 4,		/* dummy value */
	/* default_x_offset = */ 0,
	/* flipmode_x_offset = */ 0,
	/* pixel_width = */ 64,		/* dummy value */
	/* pixel_height = */ 32		/* dummy value */
};


EXTERN_C int u8g2_win32_init(
    HINSTANCE instance_handle,
    int show_window_mode,
    uint32_t hor_res,
    uint32_t ver_res,
    HICON icon_handle)
{
    PWINDOW_THREAD_PARAMETER parameter =
        (PWINDOW_THREAD_PARAMETER)malloc(sizeof(WINDOW_THREAD_PARAMETER));
    parameter->window_mutex = CreateEventExW(NULL, NULL, 0, EVENT_ALL_ACCESS);
    parameter->instance_handle = instance_handle;
    parameter->icon_handle = icon_handle;
    parameter->hor_res = hor_res;
    parameter->ver_res = ver_res;
    parameter->show_window_mode = show_window_mode;

    _beginthreadex(
        NULL,
        0,
        u8g2_win32_window_thread_entrypoint,
        parameter,
        0,
        NULL);

    WaitForSingleObjectEx(parameter->window_mutex, INFINITE, FALSE);

    return true;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

static HDC u8g2_win32_create_frame_buffer(
    HWND WindowHandle,
    LONG Width,
    LONG Height,
    UINT32** PixelBuffer,
    SIZE_T* PixelBufferSize)
{
    HDC hFrameBufferDC = NULL;

    if (PixelBuffer && PixelBufferSize)
    {
        HDC hWindowDC = GetDC(WindowHandle);
        if (hWindowDC)
        {
            hFrameBufferDC = CreateCompatibleDC(hWindowDC);
            ReleaseDC(WindowHandle, hWindowDC);
        }

        if (hFrameBufferDC)
        {
#if U8G2_COLOR_DEPTH == 32
            BITMAPINFO BitmapInfo = { 0 };
#elif U8G2_COLOR_DEPTH == 16
            typedef struct _BITMAPINFO_16BPP {
                BITMAPINFOHEADER bmiHeader;
                DWORD bmiColorMask[3];
            } BITMAPINFO_16BPP, *PBITMAPINFO_16BPP;

            BITMAPINFO_16BPP BitmapInfo = { 0 };
#elif U8G2_COLOR_DEPTH == 8
            typedef struct _BITMAPINFO_8BPP {
                BITMAPINFOHEADER bmiHeader;
                RGBQUAD bmiColors[256];
            } BITMAPINFO_8BPP, *PBITMAPINFO_8BPP;

            BITMAPINFO_8BPP BitmapInfo = { 0 };
#elif U8G2_COLOR_DEPTH == 1
            typedef struct _BITMAPINFO_1BPP {
                BITMAPINFOHEADER bmiHeader;
                RGBQUAD bmiColors[2];
            } BITMAPINFO_1BPP, *PBITMAPINFO_1BPP;

            BITMAPINFO_1BPP BitmapInfo = { 0 };
#else
            BITMAPINFO BitmapInfo = { 0 };
#endif

            BitmapInfo.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
            BitmapInfo.bmiHeader.biWidth = Width;
            BitmapInfo.bmiHeader.biHeight = -Height;
            BitmapInfo.bmiHeader.biPlanes = 1;
#if U8G2_COLOR_DEPTH == 32
            BitmapInfo.bmiHeader.biBitCount = 32;
            BitmapInfo.bmiHeader.biCompression = BI_RGB;
#elif U8G2_COLOR_DEPTH == 16
            BitmapInfo.bmiHeader.biBitCount = 16;
            BitmapInfo.bmiHeader.biCompression = BI_BITFIELDS;
            BitmapInfo.bmiColorMask[0] = 0xF800;
            BitmapInfo.bmiColorMask[1] = 0x07E0;
            BitmapInfo.bmiColorMask[2] = 0x001F;
#elif U8G2_COLOR_DEPTH == 8
            BitmapInfo.bmiHeader.biBitCount = 8;
            BitmapInfo.bmiHeader.biCompression = BI_RGB;
            for (size_t i = 0; i < 256; ++i)
            {
                lv_color8_t color;
                color.full = i;

                BitmapInfo.bmiColors[i].rgbRed = LV_COLOR_GET_R(color) * 36;
                BitmapInfo.bmiColors[i].rgbGreen = LV_COLOR_GET_G(color) * 36;
                BitmapInfo.bmiColors[i].rgbBlue = LV_COLOR_GET_B(color) * 85;
                BitmapInfo.bmiColors[i].rgbReserved = 0xFF;
            }
#elif U8G2_COLOR_DEPTH == 1
            BitmapInfo.bmiHeader.biBitCount = 8;
            BitmapInfo.bmiHeader.biCompression = BI_RGB;
            BitmapInfo.bmiHeader.biClrUsed = 2;
            BitmapInfo.bmiHeader.biClrImportant = 2;
            BitmapInfo.bmiColors[0].rgbRed = 0x00;
            BitmapInfo.bmiColors[0].rgbGreen = 0x00;
            BitmapInfo.bmiColors[0].rgbBlue = 0x00;
            BitmapInfo.bmiColors[0].rgbReserved = 0xFF;
            BitmapInfo.bmiColors[1].rgbRed = 0xFF;
            BitmapInfo.bmiColors[1].rgbGreen = 0xFF;
            BitmapInfo.bmiColors[1].rgbBlue = 0xFF;
            BitmapInfo.bmiColors[1].rgbReserved = 0xFF;
#else
            BitmapInfo.bmiHeader.biBitCount = 32;
            BitmapInfo.bmiHeader.biCompression = BI_RGB;
#endif

            HBITMAP hBitmap = CreateDIBSection(
                hFrameBufferDC,
                (PBITMAPINFO)(&BitmapInfo),
                DIB_RGB_COLORS,
                (void**)PixelBuffer,
                NULL,
                0);
            if (hBitmap)
            {
#if U8G2_COLOR_DEPTH == 32
                *PixelBufferSize = Width * Height * sizeof(UINT32);
#elif U8G2_COLOR_DEPTH == 16
                *PixelBufferSize = Width * Height * sizeof(UINT16);
#elif U8G2_COLOR_DEPTH == 8
                *PixelBufferSize = Width * Height * sizeof(UINT8);
#elif U8G2_COLOR_DEPTH == 1
                *PixelBufferSize = Width * Height * sizeof(UINT8);
#else
                *PixelBufferSize = Width * Height * sizeof(UINT32);
#endif

                DeleteObject(SelectObject(hFrameBufferDC, hBitmap));
                DeleteObject(hBitmap);
            }
            else
            {
                DeleteDC(hFrameBufferDC);
                hFrameBufferDC = NULL;
            }
        }
    }

    return hFrameBufferDC;
}

static BOOL u8g2_win32_enable_child_window_dpi_message(
    HWND WindowHandle)
{
    // This hack is only for Windows 10 TH1/TH2 only.
    // We don't need this hack if the Per Monitor Aware V2 is existed.
    OSVERSIONINFOEXW OSVersionInfoEx = { 0 };
    OSVersionInfoEx.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEXW);
    OSVersionInfoEx.dwMajorVersion = 10;
    OSVersionInfoEx.dwMinorVersion = 0;
    OSVersionInfoEx.dwBuildNumber = 14393;
    if (!VerifyVersionInfoW(
        &OSVersionInfoEx,
        VER_MAJORVERSION | VER_MINORVERSION | VER_BUILDNUMBER,
        VerSetConditionMask(
            VerSetConditionMask(
                VerSetConditionMask(
                    0,
                    VER_MAJORVERSION,
                    VER_GREATER_EQUAL),
                VER_MINORVERSION,
                VER_GREATER_EQUAL),
            VER_BUILDNUMBER,
            VER_LESS)))
    {
        return FALSE;
    }

    HMODULE ModuleHandle = GetModuleHandleW(L"user32.dll");
    if (!ModuleHandle)
    {
        return FALSE;
    }

    typedef BOOL(WINAPI* FunctionType)(HWND, BOOL);

    FunctionType pFunction = (FunctionType)(
        GetProcAddress(ModuleHandle, "EnableChildWindowDpiMessage"));
    if (!pFunction)
    {
        return FALSE;
    }

    return pFunction(WindowHandle, TRUE);
}

static UINT u8g2_win32_get_dpi_for_window(
    _In_ HWND WindowHandle)
{
    UINT Result = (UINT)(-1);

    HMODULE ModuleHandle = LoadLibraryW(L"SHCore.dll");
    if (ModuleHandle)
    {
        typedef enum MONITOR_DPI_TYPE_PRIVATE {
            MDT_EFFECTIVE_DPI = 0,
            MDT_ANGULAR_DPI = 1,
            MDT_RAW_DPI = 2,
            MDT_DEFAULT = MDT_EFFECTIVE_DPI
        } MONITOR_DPI_TYPE_PRIVATE;

        typedef HRESULT(WINAPI* FunctionType)(
            HMONITOR, MONITOR_DPI_TYPE_PRIVATE, UINT*, UINT*);

        FunctionType pFunction = (FunctionType)(
            GetProcAddress(ModuleHandle, "GetDpiForMonitor"));
        if (pFunction)
        {
            HMONITOR MonitorHandle = MonitorFromWindow(
                WindowHandle,
                MONITOR_DEFAULTTONEAREST);

            UINT dpiX = 0;
            UINT dpiY = 0;
            if (SUCCEEDED(pFunction(
                MonitorHandle,
                MDT_EFFECTIVE_DPI,
                &dpiX,
                &dpiY)))
            {
                Result = dpiX;
            }
        }

        FreeLibrary(ModuleHandle);
    }

    if (Result == (UINT)(-1))
    {
        HDC hWindowDC = GetDC(WindowHandle);
        if (hWindowDC)
        {
            Result = GetDeviceCaps(hWindowDC, LOGPIXELSX);
            ReleaseDC(WindowHandle, hWindowDC);
        }
    }

    if (Result == (UINT)(-1))
    {
        Result = USER_DEFAULT_SCREEN_DPI;
    }

    return Result;
}

static LRESULT CALLBACK u8g2_win32_window_message_callback(
    HWND   hWnd,
    UINT   uMsg,
    WPARAM wParam,
    LPARAM lParam)
{
    switch (uMsg)
    {
    case WM_MOUSEMOVE:
    case WM_LBUTTONDOWN:
    case WM_LBUTTONUP:
    case WM_MBUTTONDOWN:
    case WM_MBUTTONUP:
    {
        g_mouse_value = lParam;
        if (uMsg == WM_LBUTTONDOWN || uMsg == WM_LBUTTONUP)
        {
            g_mouse_pressed = (uMsg == WM_LBUTTONDOWN);
        }
        else if (uMsg == WM_MBUTTONDOWN || uMsg == WM_MBUTTONUP)
        {
            g_mousewheel_pressed = (uMsg == WM_MBUTTONDOWN);
        }
        return 0;
    }
    case WM_KEYDOWN:
    case WM_KEYUP:
    {
        g_keyboard_pressed = (uMsg == WM_KEYDOWN);
        g_keyboard_value = wParam;
        break;
    }
    case WM_MOUSEWHEEL:
    {
        g_mousewheel_value = -(GET_WHEEL_DELTA_WPARAM(wParam) / WHEEL_DELTA);
        break;
    }
    case WM_TOUCH:
    {

        break;
    }
    case WM_DPICHANGED:
    {
        g_dpi_value = HIWORD(wParam);

        LPRECT SuggestedRect = (LPRECT)lParam;

        SetWindowPos(
            hWnd,
            NULL,
            SuggestedRect->left,
            SuggestedRect->top,
            SuggestedRect->right,
            SuggestedRect->bottom,
            SWP_NOZORDER | SWP_NOACTIVATE);

        RECT ClientRect;
        GetClientRect(hWnd, &ClientRect);

        int WindowWidth = MulDiv(
            u8x8_win32drv.width * WIN32DRV_MONITOR_ZOOM,
            g_dpi_value,
            USER_DEFAULT_SCREEN_DPI);
        int WindowHeight = MulDiv(
            u8x8_win32drv.height * WIN32DRV_MONITOR_ZOOM,
            g_dpi_value,
            USER_DEFAULT_SCREEN_DPI);

        SetWindowPos(
            hWnd,
            NULL,
            SuggestedRect->left,
            SuggestedRect->top,
            SuggestedRect->right + (WindowWidth - ClientRect.right),
            SuggestedRect->bottom + (WindowHeight - ClientRect.bottom),
            SWP_NOZORDER | SWP_NOACTIVATE);

        break;
    }
    case WM_PAINT:
    {
        g_display_refreshing = true;

        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hWnd, &ps);

        SetStretchBltMode(hdc, HALFTONE);

        StretchBlt(
            hdc,
            ps.rcPaint.left,
            ps.rcPaint.top,
            ps.rcPaint.right - ps.rcPaint.left,
            ps.rcPaint.bottom - ps.rcPaint.top,
            g_buffer_dc_handle,
            0,
            0,
            MulDiv(
                ps.rcPaint.right - ps.rcPaint.left,
                USER_DEFAULT_SCREEN_DPI,
                WIN32DRV_MONITOR_ZOOM * g_dpi_value),
            MulDiv(
                ps.rcPaint.bottom - ps.rcPaint.top,
                USER_DEFAULT_SCREEN_DPI,
                WIN32DRV_MONITOR_ZOOM * g_dpi_value),
            SRCCOPY);

        EndPaint(hWnd, &ps);

        g_display_refreshing = false;

        break;
    }
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProcW(hWnd, uMsg, wParam, lParam);
    }

    return 0;
}

static unsigned int __stdcall u8g2_win32_window_thread_entrypoint(
    void* raw_parameter)
{
    PWINDOW_THREAD_PARAMETER parameter =
        (PWINDOW_THREAD_PARAMETER)raw_parameter;

    WNDCLASSEXW window_class;
    window_class.cbSize = sizeof(WNDCLASSEXW);
    window_class.style = 0;
    window_class.lpfnWndProc = u8g2_win32_window_message_callback;
    window_class.cbClsExtra = 0;
    window_class.cbWndExtra = 0;
    window_class.hInstance = parameter->instance_handle;
    window_class.hIcon = parameter->icon_handle;
    window_class.hCursor = LoadCursorW(NULL, IDC_ARROW);
    window_class.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    window_class.lpszMenuName = NULL;
    window_class.lpszClassName = L"u8g2_sim_visual_studio";
    window_class.hIconSm = parameter->icon_handle;
    if (!RegisterClassExW(&window_class))
    {
        return 0;
    }

    HWND window_handle = CreateWindowExW(
        WINDOW_EX_STYLE,
        window_class.lpszClassName,
        L"U8G2 Simulator for Windows Desktop",
        WINDOW_STYLE,
        CW_USEDEFAULT,
        0,
        CW_USEDEFAULT,
        0,
        NULL,
        NULL,
        parameter->instance_handle,
        NULL);

    if (!window_handle)
    {
        return 0;
    }

    g_dpi_value = u8g2_win32_get_dpi_for_window(window_handle);

    RECT window_size;

    window_size.left = 0;
    window_size.right = MulDiv(
        parameter->hor_res * WIN32DRV_MONITOR_ZOOM,
        g_dpi_value,
        USER_DEFAULT_SCREEN_DPI);
    window_size.top = 0;
    window_size.bottom = MulDiv(
        parameter->ver_res * WIN32DRV_MONITOR_ZOOM,
        g_dpi_value,
        USER_DEFAULT_SCREEN_DPI);

    AdjustWindowRectEx(
        &window_size,
        WINDOW_STYLE,
        FALSE,
        WINDOW_EX_STYLE);
    OffsetRect(
        &window_size,
        -window_size.left,
        -window_size.top);

    SetWindowPos(
        window_handle,
        NULL,
        10,
        10,
        window_size.right,
        window_size.bottom,
        SWP_NOZORDER | SWP_NOACTIVATE | SWP_NOMOVE);

    u8g2_win32_enable_child_window_dpi_message(window_handle);

    HDC hNewBufferDC = u8g2_win32_create_frame_buffer(
        window_handle,
        parameter->hor_res,
        parameter->ver_res,
        &g_pixel_buffer,
        &g_pixel_buffer_size);

    DeleteDC(g_buffer_dc_handle);
    g_buffer_dc_handle = hNewBufferDC;

    ShowWindow(window_handle, parameter->show_window_mode);
    UpdateWindow(window_handle);
    g_window_handle = window_handle;

    SetEvent(parameter->window_mutex);

    MSG message;
    while (GetMessageW(&message, NULL, 0, 0))
    {
        TranslateMessage(&message);
        DispatchMessageW(&message);
    }

    win32_quit_signal = true;

    return 0;
}

enum {
    UG_KEY_UP        = 17,  /*0x11*/
    UG_KEY_DOWN      = 18,  /*0x12*/
    UG_KEY_RIGHT     = 19,  /*0x13*/
    UG_KEY_LEFT      = 20,  /*0x14*/
    UG_KEY_ESC       = 27,  /*0x1B*/
    UG_KEY_DEL       = 127, /*0x7F*/
    UG_KEY_BACKSPACE = 8,   /*0x08*/
    UG_KEY_ENTER     = 10,  /*0x0A, '\n'*/
    UG_KEY_NEXT      = 9,   /*0x09, '\t'*/
    UG_KEY_PREV      = 11,  /*0x0B, '*/
    UG_KEY_HOME      = 2,   /*0x02, STX*/
    UG_KEY_END       = 3,   /*0x03, ETX*/
};

void win32_keypad_read(
    int *state,
    int *key)
{
    *state = (g_keyboard_pressed ? 1 : 0);

    WPARAM KeyboardValue = g_keyboard_value;

    switch (KeyboardValue)
    {
    case VK_UP:
        *key = UG_KEY_UP;
        break;
    case VK_DOWN:
        *key = UG_KEY_DOWN;
        break;
    case VK_LEFT:
        *key = UG_KEY_LEFT;
        break;
    case VK_RIGHT:
        *key = UG_KEY_RIGHT;
        break;
    case VK_ESCAPE:
        *key = UG_KEY_ESC;
        break;
    case VK_DELETE:
        *key = UG_KEY_DEL;
        break;
    case VK_BACK:
        *key = UG_KEY_BACKSPACE;
        break;
    case VK_RETURN:
        *key = UG_KEY_ENTER;
        break;
    case VK_NEXT:
        *key = UG_KEY_NEXT;
        break;
    case VK_PRIOR:
        *key = UG_KEY_PREV;
        break;
    case VK_HOME:
        *key = UG_KEY_HOME;
        break;
    case VK_END:
        *key = UG_KEY_END;
        break;
    default:
        if (KeyboardValue >= 'A' && KeyboardValue <= 'Z')
        {
            KeyboardValue += 0x20;
        }

        *key = (uint32_t)KeyboardValue;

        break;
    }
}

/*========================================================*/
/* framebuffer functions */

uint8_t u8x8_win32drv_alloc(u8x8_win32drv_t *fb)
{
	size_t tile_width;
	size_t tile_height;
	size_t screensize = 0;

	if ( fb->u8x8_buf != NULL )
		free(fb->u8x8_buf);

	fb->active_color = 0x000000;
    fb->bg_color = 0xFFFFFFFF;
#if U8G2_COLOR_DEPTH == 32
    fb->bits_per_pixel = 32;
#elif U8G2_COLOR_DEPTH == 16
    fb->bits_per_pixel = 16;
#else
    #error U8G2_COLOR_DEPTH must be 16 or 32
#endif

	tile_width = (fb->width+7)/8;
	tile_height = (fb->height+7)/8;
	screensize = tile_width*tile_height * 8;

	/* allocate the tile buffer twice, one for u8x8 and another bitmap for u8g2 */
	fb->u8x8_buf = (uint8_t *)malloc(screensize*2);
	fb->u8g2_buf = (uint8_t *)fb->u8x8_buf + screensize;

	if ( fb->u8x8_buf == NULL ) {
		fb->u8g2_buf = NULL;
		return 0;
	}

	// Map the device to memory
	fb->fbp = (uint8_t *)g_pixel_buffer;

	memset(fb->fbp, 0xFF, g_pixel_buffer_size);
	return 1;
}

void u8x8_win32drv_DrawTiles(u8x8_win32drv_t *fb, uint16_t tx, uint16_t ty, uint8_t tile_cnt, uint8_t *tile_ptr)
{
	uint8_t byte;
	memset(fb->u8x8_buf,0x00,8*tile_cnt);

	for(int i=0; i < tile_cnt * 8; i++){
		byte = *tile_ptr++;
		for(int bit=0; bit < 8;bit++){
			if(byte & (1 << bit))
				fb->u8x8_buf[tile_cnt*bit+(i/8)] |= (1 << i%8);
		}
	}

	switch (fb->bits_per_pixel) {
		case 1:
			memcpy(fb->fbp+ty*8*tile_cnt, fb->u8x8_buf, tile_cnt*8);
			break;
		case 16:{
			uint16_t pixel;
			uint16_t *fbp16 = (uint16_t *)fb->fbp;
			long int location = 0;

			uint8_t b = (fb->active_color & 0x0000FF) >> 0;
			uint8_t g = (fb->active_color & 0x00FF00) >> 8;
			uint8_t r = (fb->active_color & 0xFF0000) >> 16;

			for(int y=0; y<8;y++){
				for(int x=0; x<8*tile_cnt;x++){
					if(fb->u8x8_buf[(x/8) + (y*tile_cnt) ] & (1 << x%8))
						pixel =  r<<11 | g << 5 | b;
					else
						pixel = 0x000000;
					location = (x) + ((ty*8)+y) * fb->width;
					memcpy(&fbp16[location], &pixel, sizeof(pixel));
				}
			}
		}break;
		case 32:{
			uint32_t pixel;
			uint32_t *fbp32 = (uint32_t *)fb->fbp;
			long int location = 0;

			for(int y=0; y<8;y++){
				for(int x=0; x<8*tile_cnt;x++){
					if(fb->u8x8_buf[(x/8) + (y*tile_cnt) ] & (1 << x%8))
						pixel = fb->active_color;
					else
						pixel = fb->bg_color;

					location = (x) + ((ty*8)+y ) * fb->width;
					memcpy(&fbp32[location], &pixel, sizeof(pixel));
				}
			}
		}break;
		//TODO support 24/16/8 bits_per_pixel
		default:
			break;
	}

    InvalidateRect(g_window_handle, NULL, FALSE);
}


/*========================================================*/
/* functions for handling of the global objects */

/* allocate bitmap */
/* will be called by u8x8_SetupBitmap or u8g2_SetupBitmap */
static uint8_t u8x8_Setwin32drvDevice(U8X8_UNUSED u8x8_t *u8x8,
    HINSTANCE hInstance, uint32_t width, uint32_t height)
{
	u8x8_win32drv.width = width;
	u8x8_win32drv.height = height;

	u8g2_win32_init(hInstance, SW_SHOWNORMAL, 296, 152, NULL);

	/* update the global framebuffer object, allocate memory */
	if ( u8x8_win32drv_alloc(&u8x8_win32drv) == 0 )
		return 0;

	/* update the u8x8 info object */
	u8x8_libuxfb_info.tile_width = (u8x8_win32drv.width+7)/8;
	u8x8_libuxfb_info.tile_height = (u8x8_win32drv.height+7)/8;
	u8x8_libuxfb_info.pixel_width = u8x8_win32drv.width;
	u8x8_libuxfb_info.pixel_height = u8x8_win32drv.height;
	return 1;
}

/* draw tiles to the bitmap, called by the device procedure */
static void u8x8_Drawwin32drvTiles(U8X8_UNUSED u8x8_t *u8x8, uint16_t tx, uint16_t ty, uint8_t tile_cnt, uint8_t *tile_ptr)
{
	u8x8_win32drv_DrawTiles(&u8x8_win32drv, tx, ty, tile_cnt, tile_ptr);
}

/*========================================================*/

static uint8_t u8x8_framebuffer_cb(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr)
{
	u8g2_uint_t x, y, c;
	uint8_t *ptr;
	switch(msg)
	{
	case U8X8_MSG_DISPLAY_SETUP_MEMORY:
		u8x8_d_helper_display_setup_memory(u8x8, &u8x8_libuxfb_info);
		break;
	case U8X8_MSG_DISPLAY_INIT:
		u8x8_d_helper_display_init(u8x8);	/* update low level interfaces (not required here) */
		break;
	case U8X8_MSG_DISPLAY_SET_POWER_SAVE:
		break;
	case U8X8_MSG_DISPLAY_SET_FLIP_MODE:
		break;
	case U8X8_MSG_DISPLAY_DRAW_TILE:
		x = ((u8x8_tile_t *)arg_ptr)->x_pos;
		y = ((u8x8_tile_t *)arg_ptr)->y_pos;
		c = ((u8x8_tile_t *)arg_ptr)->cnt;
		ptr = ((u8x8_tile_t *)arg_ptr)->tile_ptr;
		do
		{
			u8x8_Drawwin32drvTiles(u8x8, x, y, c, ptr);
			x += c;
			arg_int--;
		} while( arg_int > 0 );
		break;
	default:
	  return 0;
	}
	return 1;
}


/*========================================================*/
/* u8x8 and u8g2 setup functions */

void u8x8_Setupwin32drv(u8x8_t *u8x8, HINSTANCE hInstance, uint32_t width, uint32_t height)
{
	u8x8_Setwin32drvDevice(u8x8, hInstance, width, height);

	/* setup defaults */
	u8x8_SetupDefaults(u8x8);

	/* setup specific callbacks */
	u8x8->display_cb = u8x8_framebuffer_cb;

	/* setup display info */
	u8x8_SetupMemory(u8x8);
}

void u8g2_Setupwin32drv(u8g2_t *u8g2, const u8g2_cb_t *u8g2_cb,
    HINSTANCE hInstance, uint32_t width, uint32_t height)
{

	/* allocate bitmap, assign the device callback to u8x8 */
	u8x8_Setupwin32drv(u8g2_GetU8x8(u8g2), hInstance, width, height);

	/* configure u8g2 in full buffer mode */
	u8g2_SetupBuffer(u8g2, u8x8_win32drv.u8g2_buf, (u8x8_libuxfb_info.pixel_height+7)/8, u8g2_ll_hvline_vertical_top_lsb, u8g2_cb);
}

void u8x8_win32drvSetActiveColor(uint32_t color)
{
	u8x8_win32drv.active_color = color;
}

#endif /*USE_WIN32DRV*/
