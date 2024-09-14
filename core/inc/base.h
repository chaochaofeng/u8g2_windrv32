
#ifndef _BASE_H
#define _BASE_H

#include "inc/list.h"

typedef struct {
    list_node *node;

    int x;
    int y;
    int w;
    int h;

    const char *font;
    char *context;
} ug_base;

#endif // _BASE_H
