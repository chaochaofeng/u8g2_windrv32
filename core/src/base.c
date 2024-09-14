#include "core/inc/base.h"

#define UG_LOG(x) printf(x);

ug_base *create_base(ug_base *base)
{
    ug_base *new;
    new = malloc(sizeof(ug_base));
    if (!new) {
        UG_LOG("alloc ugbase err\n");
        return NULL;
    }

    if ()
}
