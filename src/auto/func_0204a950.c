#include "m2c.h"

s32 func_01ff8668(void *);
s32 FX_Div(s32 xNum, s32 xDen);

void func_0204a950(u8 *arg0) {
    s32 sp[3];
    s32 v;
    s64 p0;
    s64 p1;
    s64 p2;

    if (arg0 == NULL) {
        return;
    }
    if (arg0[0x2] != 5) {
        return;
    }
    *(s32 *) (arg0 + 0x5C) = *(s32 *) (arg0 + 0x50) + *(s32 *) (arg0 + 0x38);
    *(s32 *) (arg0 + 0x60) = *(s32 *) (arg0 + 0x54) + *(s32 *) (arg0 + 0x3C);
    *(s32 *) (arg0 + 0x64) = *(s32 *) (arg0 + 0x58) + *(s32 *) (arg0 + 0x40);
    p0                     = (s64) * (s32 *) (arg0 + 0x5C) * 0x800 + 0x800;
    *(s32 *) (arg0 + 0x5C) = (s32) (p0 >> 12);
    p1                     = (s64) * (s32 *) (arg0 + 0x60) * 0x800 + 0x800;
    *(s32 *) (arg0 + 0x60) = (s32) (p1 >> 12);
    p2                     = (s64) * (s32 *) (arg0 + 0x64) * 0x800 + 0x800;
    *(s32 *) (arg0 + 0x64) = (s32) (p2 >> 12);
    sp[0]                  = *(s32 *) (arg0 + 0x50) - *(s32 *) (arg0 + 0x38);
    sp[1]                  = *(s32 *) (arg0 + 0x54) - *(s32 *) (arg0 + 0x3C);
    sp[2]                  = *(s32 *) (arg0 + 0x58) - *(s32 *) (arg0 + 0x40);
    v                      = func_01ff8668(sp);
    *(s32 *) (arg0 + 0x68) = FX_Div(v, 0x2000);
}
