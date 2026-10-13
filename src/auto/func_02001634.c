#include "m2c.h"

u8 *func_02001634(s32 arg0, s32 arg1, s32 arg2) {
    u8 c;
    u8 *p;

    c = arg1;
    p = (u8 *) arg0 + arg2;
    while (arg2 != 0) {
        p -= 1;
        if (*p == c) {
            return p;
        }
        arg2 -= 1;
    }
    return NULL;
}
