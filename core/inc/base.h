
#ifndef _BASE_H
#define _BASE_H

#include "inc/list.h"

struct ug_base_st;

typedef int (*event_cb)(struct ug_base_st *base, int event);

struct pad_st {
    int pad_w;
    int pad_h;
    int pad_r;
};

struct ug_base_st {
    struct list_node node;
    struct list_node list;
    struct ug_base_st *parent;

    int type;

    int x;
    int y;
    int w;
    int h;

    bool bg_en;
    struct pad_st bg_pad;

    struct pad_st outline_pad;

    const char *font;
    char context[64];
    uint8_t context_type;
    bool visible;
    bool selected;
    bool can_focus;

    event_cb cb;
};

typedef struct ug_base_st ug_base;

enum {
    TYPE_TEXT = 1,
    TYPE_GLYPH,
};

enum {
    UG_TYPE_MENU = 1,
    UG_TYPE_ITEM,
};

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

ug_base *create_base(ug_base *parent, int type);
void destory_base(ug_base *item);
void ug_set_curscreen(ug_base *screen);
void ug_base_set_context(ug_base *base, const char *context);
void ug_base_set_context_type(ug_base *base, int type);
void ug_base_set_glph_encoder(ug_base *base, int encoder);
void ug_base_set_pos(ug_base *base, int x, int y);
void ug_base_set_size(ug_base *base, int w, int h);
void ug_base_set_font(ug_base *base, const char* font);
void ug_base_flush(ug_base *base);
void ug_base_enable_focus(ug_base *base, bool en);
void ug_base_enable_bg(ug_base *base, bool en);
void ug_base_enable_visible(ug_base *base, bool en);

void ug_base_rm_child(ug_base *base, ug_base *child);
void ug_base_rmall_child(ug_base *base);

void ug_set_focus(ug_base *base);
void ug_input_proc(int key);

#define ug_base_set_context_fmt(base, fmt, args...) \
do { \
    char buf[64]; \
    memset(buf, 0, sizeof(buf)); \
    sprintf(buf, fmt, ##args); \
    ug_base_set_context(base, buf); \
}\
while (0)

#endif // _BASE_H
