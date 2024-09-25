/**
 * @file win32drv.h
 *
 */

#ifndef U8G2_WIN32DRV_H
#define U8G2_WIN32DRV_H

/*********************
 *      INCLUDES
 *********************/

#define USE_WIN32DRV        1
#define U8G2_COLOR_DEPTH     32

#if USE_WIN32DRV

#include <Windows.h>

#include "csrc/u8g2.h"


#if _MSC_VER >= 1200
 // Disable compilation warnings.
#pragma warning(push)
// nonstandard extension used : bit field types other than int
#pragma warning(disable:4214)
// 'conversion' conversion from 'type1' to 'type2', possible loss of data
#pragma warning(disable:4244)
#endif

#if _MSC_VER >= 1200
// Restore compilation warnings.
#pragma warning(pop)
#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

EXTERN_C int win32_quit_signal;

EXTERN_C int u8g2_win32_init(
    HINSTANCE instance_handle,
    int show_window_mode,
    uint32_t hor_res,
    uint32_t ver_res,
    HICON icon_handle);

void u8g2_Setupwin32drv(u8g2_t *u8g2, const u8g2_cb_t *u8g2_cb,
    HINSTANCE hInstance, uint32_t width, uint32_t height);

void win32_keypad_read(int *state, int *key);
/**********************
 *      MACROS
 **********************/

#endif /*USE_WIN32DRV*/

#endif /*LV_WIN32DRV_H*/
