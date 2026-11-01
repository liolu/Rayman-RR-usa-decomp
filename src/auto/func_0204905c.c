#include "m2c.h"

extern s32 data_020d0c0c[];

void func_0204905c(s32 arg0, s32 arg1, s32 arg2) {
    s64 p0;
    s64 p1;
    s64 p2;

    p0               = (s64) arg0 * 0xFF000;
    p1               = (s64) arg1 * 0xFF000;
    p2               = (s64) arg2 * 0xFF000;
    data_020d0c0c[0] = (s32) ((p0 + 0x800) >> 12);
    data_020d0c0c[1] = (s32) ((p1 + 0x800) >> 12);
    data_020d0c0c[2] = (s32) ((p2 + 0x800) >> 12);
}
