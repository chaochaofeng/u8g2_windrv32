#include "csrc/u8g2.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "sys/win32drv/common/win32drv.h"
#include <windows.h>
#include "core/inc/base.h"

extern const uint8_t battery_font24[] U8G2_FONT_SECTION("battery_font24");
extern const uint8_t myicon_font24[] U8G2_FONT_SECTION("myicon_font24");
extern const uint8_t wifi_font24[] U8G2_FONT_SECTION("wifi_font24");
extern const uint8_t wifi_font64[] U8G2_FONT_SECTION("wifi_font64");
extern const uint8_t menu_font64[] U8G2_FONT_SECTION("menu_font64");
extern const uint8_t scrum_16x[] U8G2_FONT_SECTION("scrum_16x");
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

typedef int (*event_cb)(struct ug_base_st *base, int event);

u8g2_t u8g2;

u8g2_t *get_u8g2(void)
{
    return &u8g2;
}

struct menu_st {
    char *font;
    char encoder;
    int x;
    int y;
    event_cb cb;
};

struct menu_st menu[] = {
    {
        .font = wifi_font64,
        .encoder = 10,
        .x = 0,
        .y = 0,
    },
    {
        .font = menu_font64,
        .encoder = 10,
        .x = 120,
        .y = 80,
    },
    {
        .font = menu_font64,
        .encoder = 11,
        .x = 200,
        .y = 80,
    },
};

static void display_menu(void)
{
    u8g2_ClearBuffer(&u8g2);

    for (int i; i < sizeof(menu)/sizeof(menu[0]); i++) {
        u8g2_SetFontMode(&u8g2, 0);
        u8g2_SetDrawColor(&u8g2, 1);

        u8g2_SetFont(&u8g2, menu[i].font);
        u8g2_DrawGlyph(&u8g2, menu[i].x, menu[i].y, menu[i].encoder);
    }

    u8g2_NextPage(&u8g2);
}

static void display_bg_char(int x, int y, int inv_x, int inv_y, int r,
                            const uint8_t *font, char *str, int char_num_max)
{
    int box_x = x, box_y = y, box_w, box_h;
    int str_x, str_y;
    int char_w;

    u8g2_SetDrawColor(&u8g2, 1);
	u8g2_SetFont(&u8g2, font);

    box_w = u8g2_GetMaxCharWidth(&u8g2) * char_num_max + inv_x * 2;
    box_h = u8g2_GetMaxCharHeight(&u8g2) + inv_y * 2;

    printf("box w:%d h:%d str w:%d h:%d\n", box_w, box_h, u8g2_GetMaxCharWidth(&u8g2), u8g2_GetMaxCharHeight(&u8g2));

	u8g2_DrawRBox(&u8g2, box_x, box_y, box_w, box_h, r);

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

    u8g2_SetFont(&u8g2, battery_font24);

    //if (charge)
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

    u8g2_SetFont(&u8g2, wifi_font24);
    u8g2_DrawGlyph(&u8g2, start_x - cnt * inv_x, 26, 10);
    u8g2_SetFont(&u8g2, menu_font64);
    u8g2_DrawGlyph(&u8g2, 80, 80, 10 + charge);
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

static int time_event_cb(struct ug_base_st *base, int event)
{
    static int i = 0;

    if (base->selected) {
        base->bg_en = true;

        if (event == UG_KEY_NEXT) {
            i++;
            printf("press next\n");
        } else if (event == UG_KEY_PREV){
            i--;
            printf("press prev\n");
        }

        ug_base_set_context_fmt(base, "%02d", i);
    } else {
        base->bg_en = false;
    }

    return 0;
}

static int menu_event_cb(struct ug_base_st *base, int event);

ug_base *mainScreen;
ug_base *ui_hour;
ug_base *ui_min;
ug_base *ui_date;
ug_base *ui_temp;
ug_base *ui_humi;
ug_base *ui_humi_png;
ug_base *ui_battery_charge;
ug_base *ui_battery;
ug_base *ui_wifi;
ug_base *ui_trigger;
ug_base *ui_label;


ug_base *ui_menu_wifi;
ug_base *ui_menu_setting;
ug_base *ui_menu_back;


ug_base *menuWifiScreenconfigwifi;
ug_base *menuWifiBack;

static int menuWifi_event_cb(struct ug_base_st *base, int event)
{
    if (event != UG_KEY_ENTER)
        return 0;

    if (base == menuWifiBack) {
        base->selected = false;

        ug_set_curscreen(ui_trigger);
        ug_set_focus(ui_menu_wifi);

        ug_base_rmall_child(ui_menu_wifi);
    } else if (base == menuWifiScreenconfigwifi) {
        if (base->selected) {
            ug_base_enable_visible(menuWifiBack, false);

            ug_base_enable_bg(menuWifiScreenconfigwifi, true);
            ug_base_set_pos(menuWifiScreenconfigwifi, 40, 30);

            u8g2_SetFont(get_u8g2(), u8g2_font_logisoso24_tf);
            u8g2_DrawUTF8(get_u8g2(), 40, 90, "init wifi ap ...");
            ug_base_flush(ui_menu_wifi);
            u8g2_NextPage(get_u8g2());

            usleep(1000 * 1000);

            u8g2_ClearBuffer(get_u8g2());
            u8g2_SetDrawColor(&u8g2, 1);
            u8g2_SetFont(&u8g2, u8g2_font_logisoso24_tf);
            u8g2_DrawUTF8(&u8g2, 40, 90, "AP:configwifi");
            u8g2_DrawUTF8(&u8g2, 40, 130, "IP:192.168.4.1");

        } else {
            ug_base_enable_bg(menuWifiScreenconfigwifi, false);
            ug_base_set_pos(menuWifiScreenconfigwifi, 40, 40);

            ug_base_enable_visible(menuWifiBack, true);
        }
    }

    return;
}

static void ug_menuWifiScreen_init(void)
{
    menuWifiScreenconfigwifi = create_base(ui_menu_wifi, UG_TYPE_ITEM);
    ug_base_set_font(menuWifiScreenconfigwifi, u8g2_font_logisoso24_tf);
    ug_base_set_context_type(menuWifiScreenconfigwifi, TYPE_TEXT);
    ug_base_set_context(menuWifiScreenconfigwifi, "ConfigWifi");
    ug_base_set_pos(menuWifiScreenconfigwifi, 40, 40);
    ug_base_enable_focus(menuWifiScreenconfigwifi, true);
    menuWifiScreenconfigwifi->outline_pad.pad_w = 6;
    menuWifiScreenconfigwifi->cb = menuWifi_event_cb;

    menuWifiBack = create_base(ui_menu_wifi, UG_TYPE_ITEM);
    ug_base_set_font(menuWifiBack, u8g2_font_logisoso24_tf);
    ug_base_set_context_type(menuWifiBack, TYPE_TEXT);
    ug_base_set_context(menuWifiBack, "BACK");
    ug_base_set_pos(menuWifiBack, 40, 110);
    ug_base_enable_focus(menuWifiBack, true);
    menuWifiBack->cb = menuWifi_event_cb;
    menuWifiBack->outline_pad.pad_w = 6;
}


ug_base *menuSettingScreenconfig;
ug_base *menuSettingBack;

static int menuSetting_event_cb(struct ug_base_st *base, int event)
{
    if (event != UG_KEY_ENTER)
        return 0;

    if (base == menuSettingBack) {
        base->selected = false;

        ug_set_curscreen(ui_trigger);
        ug_set_focus(ui_menu_setting);

        ug_base_rmall_child(ui_menu_setting);
    } else if (base == menuSettingScreenconfig) {
        if (base->selected) {
            ug_base_enable_bg(menuSettingScreenconfig, true);
            ug_base_set_pos(menuSettingScreenconfig, 40, 30);

            u8g2_SetDrawColor(&u8g2, 1);
            u8g2_SetFont(&u8g2, u8g2_font_logisoso24_tf);
            u8g2_DrawUTF8(&u8g2, 40, 90, "calibrate time ...");

            ug_base_enable_visible(menuSettingBack, false);
        } else {
            ug_base_enable_bg(menuSettingScreenconfig, false);
            ug_base_set_pos(menuSettingScreenconfig, 40, 40);

            ug_base_enable_visible(menuSettingBack, true);
        }
    }

    return;
}

static void ug_menuSettingScreen_init(void)
{
    menuSettingScreenconfig = create_base(ui_menu_setting, UG_TYPE_ITEM);
    ug_base_set_font(menuSettingScreenconfig, u8g2_font_logisoso24_tf);
    ug_base_set_context_type(menuSettingScreenconfig, TYPE_TEXT);
    ug_base_set_context(menuSettingScreenconfig, "Cal Time");
    ug_base_set_pos(menuSettingScreenconfig, 40, 40);
    ug_base_enable_focus(menuSettingScreenconfig, true);
    menuSettingScreenconfig->outline_pad.pad_w = 6;
    menuSettingScreenconfig->cb = menuSetting_event_cb;

    menuSettingBack = create_base(ui_menu_setting, UG_TYPE_ITEM);
    ug_base_set_font(menuSettingBack, u8g2_font_logisoso24_tf);
    ug_base_set_context_type(menuSettingBack, TYPE_TEXT);
    ug_base_set_context(menuSettingBack, "BACK");
    ug_base_set_pos(menuSettingBack, 40, 110);
    ug_base_enable_focus(menuSettingBack, true);
    menuSettingBack->cb = menuSetting_event_cb;
    menuSettingBack->outline_pad.pad_w = 6;
}


static void ug_menuScreen_init(void)
{
    ui_menu_wifi = create_base(ui_trigger, UG_TYPE_MENU);
    ug_base_set_font(ui_menu_wifi, wifi_font64);
    ug_base_set_context_type(ui_menu_wifi, TYPE_GLYPH);
    ug_base_set_glph_encoder(ui_menu_wifi, 10);
    ug_base_set_pos(ui_menu_wifi, 40, 80);
    ug_base_enable_focus(ui_menu_wifi, true);
    ui_menu_wifi->w = 64;
    ui_menu_wifi->h = 64;
    ui_menu_wifi->cb = menu_event_cb;

    ui_menu_setting = create_base(ui_trigger, UG_TYPE_MENU);
    ug_base_set_font(ui_menu_setting, menu_font64);
    ug_base_set_context_type(ui_menu_setting, TYPE_GLYPH);
    ug_base_set_glph_encoder(ui_menu_setting, 10);
    ug_base_set_pos(ui_menu_setting, 120, 80);
    ug_base_enable_focus(ui_menu_setting, true);
    ui_menu_setting->w = 64;
    ui_menu_setting->h = 64;
    ui_menu_setting->cb = menu_event_cb;

    ui_menu_back = create_base(ui_trigger, UG_TYPE_ITEM);
    ug_base_set_font(ui_menu_back, menu_font64);
    ug_base_set_context_type(ui_menu_back, TYPE_GLYPH);
    ug_base_set_glph_encoder(ui_menu_back, 11);
    ug_base_set_pos(ui_menu_back, 200, 80);
    ug_base_enable_focus(ui_menu_back, true);
    ui_menu_back->w = 64;
    ui_menu_back->h = 64;

    ui_menu_back->cb = menu_event_cb;
}

static int menu_event_cb(struct ug_base_st *base, int event)
{
    if (event != UG_KEY_ENTER)
        return 0;

    printf("%s %p entry menuwifi:%p\n", __func__, base, ui_menu_wifi);

    if (base == ui_trigger) {
        printf("entry menu\n");

        ug_menuScreen_init();
    } else if (base == ui_menu_back) {
        base->selected = false;

        ug_set_curscreen(mainScreen);
        ug_set_focus(ui_trigger);

        ug_base_rmall_child(ui_trigger);
    } else if (base == ui_menu_wifi) {
        printf("entry menu wifi\n");
        ug_menuWifiScreen_init();
    } else if (base == ui_menu_setting) {
        printf("entry menu Setting\n");
        ug_menuSettingScreen_init();
    }

    return 0;
}

static void status_bar_init(void)
{
    int start_x = 277;
    int inv_x   = 24;
    int cnt = 0;

    ui_battery_charge = create_base(mainScreen, UG_TYPE_ITEM);
    ug_base_set_font(ui_battery_charge, battery_font24);
    ug_base_set_context_type(ui_battery_charge, TYPE_GLYPH);
    ug_base_set_glph_encoder(ui_battery_charge, 16);
    ug_base_set_pos(ui_battery_charge, start_x, 26);

    cnt++;
    ui_battery = create_base(mainScreen, UG_TYPE_ITEM);
    ug_base_set_font(ui_battery, battery_font24);
    ug_base_set_context_type(ui_battery, TYPE_GLYPH);
    ug_base_set_glph_encoder(ui_battery, 14);
    ug_base_set_pos(ui_battery, start_x - cnt * inv_x + 6, 26);

    cnt++;
    ui_wifi = create_base(mainScreen, UG_TYPE_ITEM);
    ug_base_set_font(ui_wifi, wifi_font24);
    ug_base_set_glph_encoder(ui_wifi, 10);
    ug_base_set_context_type(ui_wifi, TYPE_GLYPH);
    ug_base_set_pos(ui_wifi, start_x - cnt * inv_x, 26);

    ui_label = create_base(mainScreen, UG_TYPE_ITEM);
    ug_base_set_font(ui_label, u8g2_font_wqy16_t_chinese1);
    ug_base_set_context(ui_label, " 天天开心 ");
    ug_base_set_pos(ui_label, 5, 22);
    ug_base_set_context_type(ui_label, TYPE_TEXT);
}


static void ug_mainScreen_init(void)
{
    mainScreen = create_base(NULL, UG_TYPE_MENU);

    ui_hour = create_base(mainScreen, UG_TYPE_ITEM);
    ug_base_set_context_type(ui_hour, TYPE_TEXT);
    ug_base_enable_bg(ui_hour, true);

    ug_base_set_pos(ui_hour, 25, 100);
    ug_base_set_font(ui_hour, montmedium_font_82x);
    ug_base_set_context(ui_hour, "8");
    ui_hour->w = 108;
    ui_hour->bg_pad.pad_w = 5;
    ui_hour->bg_pad.pad_h = 10;
    ui_hour->bg_pad.pad_r = 8;

    ui_min = create_base(mainScreen, UG_TYPE_ITEM);
    ug_base_set_context_type(ui_min, TYPE_TEXT);
    ug_base_enable_bg(ui_min, true);
    ug_base_set_pos(ui_min, 25 + 118 + 20, 100);
    ug_base_set_font(ui_min, montmedium_font_82x);
    ug_base_set_context(ui_min, "00");
    ui_min->w = 108;
    ui_min->bg_pad.pad_w = 5;
    ui_min->bg_pad.pad_h = 10;
    ui_min->bg_pad.pad_r = 8;

    ui_date = create_base(mainScreen, UG_TYPE_ITEM);
    ug_base_set_context_type(ui_date, TYPE_TEXT);
    ug_base_enable_focus(ui_date, true);
    ug_base_set_pos(ui_date, 180, 145);
    ug_base_set_font(ui_date, u8g2_font_inb24_mf);
    ug_base_set_context(ui_date, "01-01");

    ui_temp = create_base(mainScreen, UG_TYPE_ITEM);
    ug_base_set_font(ui_temp, u8g2_font_logisoso24_tf);
    ug_base_set_context_type(ui_temp, TYPE_TEXT);
    ug_base_set_context(ui_temp, "25\xc2\xb0""C");
    ug_base_set_pos(ui_temp, 15, 145);

    ui_humi = create_base(mainScreen, UG_TYPE_ITEM);
    ug_base_set_font(ui_humi, u8g2_font_logisoso24_tf);
    ug_base_set_context_type(ui_humi, TYPE_TEXT);
    ug_base_set_context(ui_humi, "60");
    ug_base_set_pos(ui_humi, 110, 145);

    ui_humi_png = create_base(mainScreen, UG_TYPE_ITEM);
    ug_base_set_font(ui_humi_png, myicon_font24);
    ug_base_set_context_type(ui_humi_png, TYPE_GLYPH);
    ug_base_set_glph_encoder(ui_humi_png, 17);
    ug_base_set_pos(ui_humi_png, 78, 150);

    status_bar_init();

    ui_trigger = create_base(mainScreen, UG_TYPE_MENU);

    ui_trigger->can_focus = true;
    ui_trigger->cb = menu_event_cb;
    ug_set_focus(ui_trigger);
}

static void ug_mainScreen_update(void)
{
    u8g2_ClearBuffer(&u8g2);

    ug_base_flush(mainScreen);

    u8g2_NextPage(&u8g2);
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

void u8g2_thread()
{
    u8g2_ClearBuffer(&u8g2);

    u8g2_SetFont(&u8g2, u8g2_font_helvB08_tr);

    u8g2_DrawUTF8(&u8g2, 2, 10, "U8G2 on");
    u8g2_DrawUTF8(&u8g2, 2, 20, "Win32Drv");
    u8g2_DrawUTF8(&u8g2, 2, 31, "Framebuffer");
    u8g2_SetFont(&u8g2, u8g2_font_open_iconic_all_4x_t);
    u8g2_DrawGlyph(&u8g2,200, 100, 120);
    u8g2_NextPage(&u8g2);

    usleep(1000 * 1000);
    ug_mainScreen_init();
    ug_mainScreen_update();

    while (1) {
        usleep(10 * 1000);
    }
}

void key_read_thread()
{
    int state, key;

    while (1) {
        win32_keypad_read(&state, &key);

        if (state)
            ug_input_proc(key);

        usleep(50 * 1000);
    }
}

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR szCmdLine, int nCmdShow)
{
    u8g2_Setupwin32drv(&u8g2, U8G2_R0, hInstance, 296, 152);
    u8x8_InitDisplay(u8g2_GetU8x8(&u8g2));
    u8x8_SetPowerSave(u8g2_GetU8x8(&u8g2), 0);

    HANDLE u8g2_thread_handle; //线程句柄
	u8g2_thread_handle = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)u8g2_thread, NULL, 1, 0); //创建子线程
	ResumeThread(u8g2_thread_handle);  //启动子线程

    HANDLE u8g2_key_handle; //线程句柄
	u8g2_key_handle = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)key_read_thread, NULL, 1, 0); //创建子线程
	ResumeThread(u8g2_key_handle);  //启动子线程

    while(!win32_quit_signal) {
        usleep(10 * 1000);
    }

    CloseHandle(u8g2_key_handle);
    CloseHandle(u8g2_thread_handle);

    return 0;
}
