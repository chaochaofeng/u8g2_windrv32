#include "csrc/u8g2.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "sys/win32drv/common/win32drv.h"

#include <windows.h>

extern const uint8_t battery_font24[] U8G2_FONT_SECTION("battery_font24");

extern const uint8_t myicon_font24[] U8G2_FONT_SECTION("myicon_font24");
/* battery-bar0.png enc=10 w=24 h=24
battery-bar1.png enc=11 w=24 h=24
battery-bar2.png enc=12 w=24 h=24
battery-bar3.png enc=13 w=24 h=24
battery-bar4.png enc=14 w=24 h=24
battery-bar5.png enc=15 w=24 h=24
bolt.png enc=16 w=24 h=24
thermometer.png enc=17 w=16 h=16
*/

u8g2_t u8g2;

static void display_bg_char(int x, int y, int inv_x, int inv_y, int r, char *str)
{
    int box_x = x, box_y = y, box_w, box_h;
    int hour_x, hour_y;
    int char_w;

    u8g2_SetFontMode(&u8g2, 0);
    u8g2_SetDrawColor(&u8g2, 1);
	u8g2_SetFont(&u8g2, montmedium_font_82x);

    box_w = u8g2_GetMaxCharWidth(&u8g2) * 2 + inv_x * 2;
    box_h = u8g2_GetMaxCharHeight(&u8g2) + inv_y * 2;

    printf("box w:%d h:%d\n", box_w, box_h);

	u8g2_DrawRBox(&u8g2, box_x, box_y, box_w, box_h, r);

    u8g2_SetFontMode(&u8g2, 1);
    u8g2_SetDrawColor(&u8g2, 0);

    char_w = u8g2_GetStrWidth(&u8g2, str);

    hour_x = box_x + (box_w - char_w) / 2;
    hour_y = box_y + inv_y + u8g2_GetAscent(&u8g2);

    u8g2_DrawUTF8(&u8g2, hour_x, hour_y, str);
}

static void display_battery(int voltage, int charge)
{
    int encoder = 10;
    int start_x = 277;
    int inv_x   = 24;
    int cnt = 0;

    u8g2_SetFontMode(&u8g2, 0);
    u8g2_SetDrawColor(&u8g2, 1);

    u8g2_SetFont(&u8g2, myicon_font24);

    if (charge)
        u8g2_DrawGlyph(&u8g2, 277, 26, 16);

    cnt++;

    if (voltage < 20)
        encoder += 0;
    else if (voltage < 35)
        encoder += 1;
    else if (voltage < 55)
        encoder += 2;
    else if (voltage < 70)
        encoder += 3;
    else if (voltage < 85)
        encoder += 4;
    else
        encoder += 5;

    u8g2_DrawGlyph(&u8g2, start_x - cnt * inv_x + 7, 26, encoder);
    cnt++;

    u8g2_DrawGlyph(&u8g2, start_x - cnt * inv_x, 26, 18);
}

static void display_time(int hour, int min)
{
    char buf[3];

    sprintf(buf, "%d", hour);
    display_bg_char(20, 30, 5, 10, 8, buf);

    sprintf(buf, "%d", min);
    display_bg_char(20 + 118 + 20, 30, 5, 10, 8, buf);
}

int u8g2_init_windows(void)
{
    static int hour = 0;
    static battery = 1;

    u8g2_SetDrawColor(&u8g2, 1);
    u8g2_SetFont(&u8g2, u8g2_font_helvB08_tr);

    u8g2_ClearBuffer(&u8g2);
    u8g2_DrawUTF8(&u8g2, 2, 10, "U8G2 on");
    u8g2_DrawUTF8(&u8g2, 2, 20, "Win32Drv");
    u8g2_DrawUTF8(&u8g2, 2, 31, "Framebuffer");
    u8g2_SetFont(&u8g2, u8g2_font_open_iconic_all_4x_t);
    u8g2_DrawGlyph(&u8g2,200, 100, 120);


    display_time(hour, hour+ 5 % 24);
    display_battery(battery % 100, hour%2);
    battery += 23;

    hour++;
    if (hour > 24)
        hour = 0;

    u8g2_NextPage(&u8g2);

	return 0;
}

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR szCmdLine, int nCmdShow)
{
    u8g2_Setupwin32drv(&u8g2, U8G2_R0, hInstance, 296, 152);
	u8x8_InitDisplay(u8g2_GetU8x8(&u8g2));
	u8x8_SetPowerSave(u8g2_GetU8x8(&u8g2), 0);

    while(!win32_quit_signal) {
        u8g2_init_windows();

        usleep(1000 * 1000);
    }
    return 0;
}
