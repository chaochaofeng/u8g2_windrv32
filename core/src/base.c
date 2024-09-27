#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "core/inc/base.h"
#include "csrc/u8g2.h"

#define UG_LOG printf

static ug_base *display_cur;
static ug_base *focus_cur = NULL;

ug_base *create_base(ug_base *parent, int type)
{
    ug_base *new;
    new = malloc(sizeof(ug_base));
    if (!new) {
        UG_LOG("alloc ugbase err\n");
        return NULL;
    }

    memset(new, 0, sizeof(ug_base));

    if (parent) {
        list_add_tail(&parent->list, &new->node);
        new->parent = parent;
    }

    new->type = type;
    list_initialize(&new->list);

    new->outline_pad.pad_h = 2;
    new->outline_pad.pad_w = 2;
    new->outline_pad.pad_r = 2;

    new->visible = true;

    UG_LOG("init :%p\n", new);

    return new;
}

void destory_base(ug_base *item)
{
    ug_base *child = NULL;

    child = list_remove_head_type(&item->list, ug_base, list);
    if (!child)
        return;

    destory_base(child);

    free(child);
}

void ug_base_rm_child(ug_base *base, ug_base *child)
{
    ug_base *tmp = NULL;
    if (!child)
        return;

    do {
        tmp = list_peek_head_type(&base->list, ug_base, node);
    } while (tmp && tmp != child);

    if (tmp == child) {
        list_delete(&child->node);
    }

    free(child);
}

void ug_base_rmall_child(ug_base *base)
{
    ug_base *tmp = NULL;

    while (!list_is_empty(&base->list)) {
        tmp = list_remove_head_type(&base->list, ug_base, node);
        if (tmp) {
            printf("%s %p\n", __func__, tmp);
            free(tmp);
        }
    }
}

void ug_base_set_context(ug_base *base, const char *context)
{
    memset(base->context, 0, sizeof(base->context));

    memcpy(base->context, context, strlen(context));
}

void ug_base_set_context_type(ug_base *base, int type)
{
    base->context_type = type;
}

void ug_base_set_glph_encoder(ug_base *base, int encoder)
{
    int *val = (int *)base->context;

    *val = encoder;
}

void ug_base_set_pos(ug_base *base, int x, int y)
{
    base->x = x;
    base->y = y;
}

void ug_base_set_size(ug_base *base, int w, int h)
{
    base->w = w;
    base->h = h;
}

void ug_base_set_font(ug_base *base, const char* font)
{
    base->font = font;
}

void ug_base_enable_focus(ug_base *base, bool en)
{
    base->can_focus = en;
}

void ug_base_enable_bg(ug_base *base, bool en)
{
    base->bg_en = en;
}

void ug_base_enable_visible(ug_base *base, bool en)
{
    base->visible = en;
}

static void display_char(ug_base *child)
{
    u8g2_SetDrawColor(get_u8g2(), 1);

    u8g2_SetFont(get_u8g2(), child->font);

    child->w = u8g2_GetStrWidth(get_u8g2(), child->context);
    child->h = u8g2_GetMaxCharHeight(get_u8g2());

    u8g2_DrawUTF8(get_u8g2(), child->x, child->y + u8g2_GetAscent(get_u8g2()), child->context);
}

static void display_glphy(ug_base *child)
{
    int x = child->x;
    int y = child->y;
    int *val = (int *)child->context;

    u8g2_SetDrawColor(get_u8g2(), 1);
	u8g2_SetFont(get_u8g2(), child->font);
    u8g2_SetFontPosTop(get_u8g2());

    if (!child->w && !child->h) {
        child->w = u8g2_GetMaxCharWidth(get_u8g2());
        child->h = u8g2_GetMaxCharHeight(get_u8g2());
    }

    u8g2_DrawGlyph(get_u8g2(), x, y, *val);
    u8g2_SetFontPosBaseline(get_u8g2());
}

static void display_bg_char(ug_base *child)
{
    int str_x = child->x, str_y = child->y;
    int char_w;
    char *str = child->context;
    int char_num_max = strlen(child->context);
    struct pad_st *bg_pad = &child->bg_pad;
    int inv_x = bg_pad->pad_w, inv_y = bg_pad->pad_h;
    int r = bg_pad->pad_r;

    if (!bg_pad->pad_w)
        inv_x = 4;

    if (!bg_pad->pad_h)
        inv_y = 4;

    if (!bg_pad->pad_r)
        r = 5;

    u8g2_SetDrawColor(get_u8g2(), 1);
	u8g2_SetFont(get_u8g2(), child->font);

    if (!child->w)
        child->w = u8g2_GetStrWidth(get_u8g2(), child->context);

    if (!child->h)
        child->h = u8g2_GetMaxCharHeight(get_u8g2());

    if (child->bg_en) {
        int box_x = child->x, box_y = child->y, box_w, box_h;

        box_x = str_x - inv_x;
        box_y = str_y - u8g2_GetAscent(get_u8g2()) - inv_y;
        box_w = child->w + inv_x * 2;
        box_h = child->h + inv_y * 2;

        printf("char_num_max:%d box_w:%d\n", char_num_max, box_w);

        u8g2_DrawRBox(get_u8g2(), box_x, box_y, box_w, box_h, r);

        u8g2_SetDrawColor(get_u8g2(), 0);

        char_w = u8g2_GetStrWidth(get_u8g2(), child->context);

        str_x = box_x + (box_w - char_w) / 2;
        //str_y = box_y + inv_y + u8g2_GetAscent(get_u8g2());
    }

    printf("%s %s\n", __func__, str);
    u8g2_DrawUTF8(get_u8g2(), str_x, str_y, str);
}

void ug_base_flush(ug_base *base)
{
    ug_base *child = NULL;
    ug_base *disp_cur = NULL;

    if (!base && !display_cur)
        return;

    if (!base)
        disp_cur = display_cur;
    else
        disp_cur = base;

    list_for_every_entry(&disp_cur->list, child, ug_base, node) {
        if (!child->visible)
            continue;

        if (!strlen(child->context))
            continue;

        if (child->context_type == TYPE_TEXT)
            display_bg_char(child);
        else if (child->context_type == TYPE_GLYPH) {
            display_glphy(child);
        } else {
            UG_LOG("can't support context_type\n");
        }
    }

    display_cur = base;
}

void ug_set_curscreen(ug_base *screen)
{
    display_cur = screen;
}

void ug_draw_outline(ug_base *base)
{
    struct pad_st *pad = &base->outline_pad;
    int outline_w = pad->pad_w, outline_h = pad->pad_h, outline_r = pad->pad_r;

    if (base && base->w) {
        printf("%s w:%d h:%d\n", __func__, base->w, base->h);
        if (base->context_type == TYPE_GLYPH) {
            u8g2_DrawRFrame(get_u8g2(),
                        base->x - outline_w,
                        base->y - base->h - outline_h,
                        base->w + outline_w*2,
                        base->h + outline_h*2,
                        outline_r);
        }
        else if (base->context_type == TYPE_TEXT) {
            int x = base->x - outline_w;
            int y = base->y - u8g2_GetAscent(get_u8g2()) - outline_h;
            int w = base->w + outline_w * 2;
            int h = u8g2_GetAscent(get_u8g2()) - u8g2_GetDescent(get_u8g2()) + outline_h*2;

            u8g2_DrawRFrame(get_u8g2(),x , y , w, h, outline_r);
        }

    }
}

void ug_find_focus(ug_base *base, bool next)
{
    ug_base *next_focus = focus_cur;

    if (next_focus == NULL) {
        if (next)
            next_focus = list_peek_head_type(&base->list, ug_base, node);
        else
            next_focus = list_peek_tail_type(&base->list, ug_base, node);

        if (!next_focus)
            goto out;
        else if (next_focus->can_focus) {
            goto draw;
        }

    }

    do {
        if (next)
            next_focus = list_next_type(&base->list, &next_focus->node, ug_base, node);
        else
            next_focus = list_prev_type(&base->list, &next_focus->node, ug_base, node);

        if (next_focus == NULL) {
            if (next)
                next_focus = list_peek_head_type(&base->list, ug_base, node);
            else
                next_focus = list_peek_tail_type(&base->list, ug_base, node);
        }
        printf("pick %p\n", next_focus);
    } while (next_focus != focus_cur && !next_focus->can_focus);

draw:
    printf("find %p\n", next_focus);
    ug_draw_outline(next_focus);

out:
    focus_cur = next_focus;
}

void ug_set_focus(ug_base *base)
{
    focus_cur = base;
}

void ug_input_proc(int key)
{
    if (key == UG_KEY_NEXT || key == UG_KEY_PREV || key == UG_KEY_ENTER) {
        u8g2_ClearBuffer(get_u8g2());

        if (key == UG_KEY_NEXT) {
            if (focus_cur && focus_cur->selected) {
                if (focus_cur->cb)
                    focus_cur->cb(focus_cur, UG_KEY_NEXT);

                ug_base_flush(display_cur);
            } else {
                ug_base_flush(display_cur);
                ug_find_focus(display_cur, true);
            }
        } else if (key == UG_KEY_PREV) {
            if (focus_cur && focus_cur->selected) {
                if (focus_cur->cb)
                    focus_cur->cb(focus_cur, UG_KEY_PREV);

                ug_base_flush(display_cur);
            } else {
                ug_base_flush(display_cur);
                ug_find_focus(display_cur, false);
            }

        } else if (key == UG_KEY_ENTER) {
            printf("enter %p type:%d\n", focus_cur, focus_cur->type);

            if (focus_cur && focus_cur->type == UG_TYPE_MENU) {
                if (focus_cur->cb) {
                    printf("%p cb\n");
                    focus_cur->cb(focus_cur, UG_KEY_ENTER);

                    ug_base_flush(focus_cur);
                    focus_cur = NULL;

                    ug_find_focus(display_cur, true);
                }
                else {
                    ug_base_flush(display_cur); //cb isn't set, don't entry

                    ug_draw_outline(focus_cur);
                }
            } else {
                focus_cur->selected = !focus_cur->selected;

                if (focus_cur->cb)
                    focus_cur->cb(focus_cur, UG_KEY_ENTER);

                ug_base_flush(display_cur);

                if (!focus_cur->selected)
                    ug_draw_outline(focus_cur);  //cancel select redraw outline
            }
        }

        u8g2_NextPage(get_u8g2());
    }
}
