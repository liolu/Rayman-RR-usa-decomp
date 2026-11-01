#include "m2c.h"

s32 func_0205488c(s32);

typedef struct {
    s32 v0;
    s32 v4;
    s32 v8;
    s32 vC;
    s32 v10;
    s32 v14;
} Ent18;

void func_02056d50(u8 *arg0, s16 arg1) {
    s16 i;
    s32 off;
    s32 n;

    *(s16 *) (arg0 + 0x3C) = arg1;
    n                      = *(s16 *) (arg0 + 0x3C);
    if (n == 0) {
        return;
    }
    if (*(s32 *) (arg0 + 0x20) != 0) {
        return;
    }
    *(s32 *) (arg0 + 0x20) = func_0205488c(0x18 * n);
    n                      = *(s16 *) (arg0 + 0x3C);
    i                      = 0;
    if (n <= 0) {
        return;
    }
    off = 0;
    do {
        ((Ent18 *) (*(u8 **) (arg0 + 0x20) + off))->v0  = 0x7FFFFFFF;
        ((Ent18 *) (*(u8 **) (arg0 + 0x20) + off))->v4  = 0x7FFFFFFF;
        ((Ent18 *) (*(u8 **) (arg0 + 0x20) + off))->v8  = 0x7FFFFFFF;
        ((Ent18 *) (*(u8 **) (arg0 + 0x20) + off))->vC  = 0x80000000;
        ((Ent18 *) (*(u8 **) (arg0 + 0x20) + off))->v10 = 0x80000000;
        ((Ent18 *) (*(u8 **) (arg0 + 0x20) + off))->v14 = 0x80000000;
        i                                               = i + 1;
        off                                             = off + 0x18;
    } while (*(s16 *) (arg0 + 0x3C) > i);
}
