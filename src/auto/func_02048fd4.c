#include "m2c.h"

extern s32 data_020d0c00[];

void func_02048fd4(s32 arg0, s32 arg1, s32 arg2) {
    s64 p0;
    s64 p1;
    s64 p2;

    p0               = (s64) arg0 * 0x14B800;
    p1               = (s64) arg1 * 0x14B800;
    p2               = (s64) arg2 * 0x14B800;
    data_020d0c00[0] = (s32) ((p0 + 0x800) >> 12);
    data_020d0c00[1] = (s32) ((p1 + 0x800) >> 12);
    data_020d0c00[2] = (s32) ((p2 + 0x800) >> 12);
}
