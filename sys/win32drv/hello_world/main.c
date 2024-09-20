#include "csrc/u8g2.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "sys/win32drv/common/win32drv.h"
#include <windows.h>

extern const uint8_t battery_font24[] U8G2_FONT_SECTION("battery_font24");

extern const uint8_t myicon_font24[] U8G2_FONT_SECTION("myicon_font24");
/*
battery-bar0.png enc=10 w=24 h=24
battery-bar1.png enc=11 w=24 h=24
battery-bar2.png enc=12 w=24 h=24
battery-bar3.png enc=13 w=24 h=24
battery-bar4.png enc=14 w=24 h=24
battery-bar5.png enc=15 w=24 h=24
bolt.png enc=16 w=24 h=24
humidity.png enc=17 w=32 h=32
thermometer.png enc=18 w=16 h=16
wifi.png enc=19 w=24 h=24
*/

u8g2_t u8g2;

u8g2_t *get_u8g2(void)
{
    return &u8g2;
}

static void display_bg_char(int x, int y, int inv_x, int inv_y, int r,
                            const uint8_t *font, char *str, int char_num_max)
{
    int box_x = x, box_y = y, box_w, box_h;
    int str_x, str_y;
    int char_w;

    u8g2_SetFontMode(&u8g2, 0);
    u8g2_SetDrawColor(&u8g2, 1);
	u8g2_SetFont(&u8g2, font);

    box_w = u8g2_GetMaxCharWidth(&u8g2) * char_num_max + inv_x * 2;
    box_h = u8g2_GetMaxCharHeight(&u8g2) + inv_y * 2;

    printf("box w:%d h:%d str w:%d h:%d\n", box_w, box_h, u8g2_GetMaxCharWidth(&u8g2), u8g2_GetMaxCharHeight(&u8g2));

	u8g2_DrawRBox(&u8g2, box_x, box_y, box_w, box_h, r);

    u8g2_SetFontMode(&u8g2, 1);
    u8g2_SetDrawColor(&u8g2, 0);

    char_w = u8g2_GetStrWidth(&u8g2, str);

    str_x = box_x + (box_w - char_w) / 2;
    str_y = box_y + inv_y + u8g2_GetAscent(&u8g2);

    u8g2_DrawUTF8(&u8g2, str_x, str_y, str);
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

    u8g2_DrawGlyph(&u8g2, start_x - cnt * inv_x + 6, 26, encoder);
    cnt++;

    u8g2_DrawGlyph(&u8g2, start_x - cnt * inv_x, 26, 19);
}

static void display_time(int hour, int min)
{
    char buf[3];

    sprintf(buf, "%d", hour);
    display_bg_char(20, 30, 5, 10, 8, montmedium_font_82x, buf, 2);

    sprintf(buf, "%d", min);
    display_bg_char(20 + 118 + 20, 30, 5, 10, 8, montmedium_font_82x, buf, 2);
}

static void display_date(int mon, int day)
{
    char buf[6];

    u8g2_SetFontMode(&u8g2, 0);
    u8g2_SetDrawColor(&u8g2, 1);

    sprintf(buf, "%02d-%02d", mon, day);

    u8g2_SetFont(&u8g2, u8g2_font_inb24_mf);
    u8g2_DrawUTF8(&u8g2, 180, 145, buf);
    //display_bg_char(180, 110, 2, 2, 3, u8g2_font_inb24_mf, buf, 5);
}

static void display_temp_hum(int temp, int humi)
{
    char buf[6];

    u8g2_SetFontMode(&u8g2, 0);
    u8g2_SetDrawColor(&u8g2, 1);

    sprintf(buf, "%d\xc2\xb0""C", temp);

    u8g2_SetFont(&u8g2, u8g2_font_logisoso24_tf);
    u8g2_DrawUTF8(&u8g2, 15, 145, buf);

    memset(buf, 0, sizeof(buf));
    sprintf(buf, "%d", humi);

    u8g2_DrawUTF8(&u8g2, 110, 145, buf);

    u8g2_SetFont(&u8g2, myicon_font24);
    u8g2_DrawGlyph(&u8g2, 78, 150, 17);
}

int u8g2_init_windows(void)
{
    static int hour = 0;
    static battery = 1;

    u8g2_ClearBuffer(&u8g2);

    display_time(hour, hour+ 5 % 24);
    display_date(hour%13, hour + 3 % 32);
    display_battery(battery % 100, hour%2);
    display_temp_hum(hour % 60, hour + 50 % 100);
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

    u8g2_ClearBuffer(&u8g2);
    u8g2_SetFont(&u8g2, u8g2_font_helvB08_tr);

    u8g2_DrawUTF8(&u8g2, 2, 10, "U8G2 on");
    u8g2_DrawUTF8(&u8g2, 2, 20, "Win32Drv");
    u8g2_DrawUTF8(&u8g2, 2, 31, "Framebuffer");
    u8g2_SetFont(&u8g2, u8g2_font_open_iconic_all_4x_t);
    u8g2_DrawGlyph(&u8g2,200, 100, 120);
    u8g2_NextPage(&u8g2);

    usleep(1000 * 1000);

    while(!win32_quit_signal) {
        u8g2_init_windows();

        usleep(1000 * 1000);
    }
    return 0;
}
