#include "m2c.h"

extern s32 data_020e9010;
extern s32 data_020e923c;
extern s32 data_020e9240;
extern s32 data_020e9244;
extern s32 data_020e9248;

void func_020b15dc(s32 arg0, s32 *arg1, s32 *arg2) {
    s64 p0;
    s64 p1;
    s32 temp_r4;
    s32 temp_lr;

    data_020e9010               = 1;
    ((s32 *) &data_020e9010)[1] = arg0;
    data_020e9248               = arg1[0];
    data_020e9244               = arg1[1];
    temp_r4                     = arg2[0];
    data_020e9240               = temp_r4;
    temp_lr                     = arg2[1];
    p0                          = (s64) temp_r4 * 0x2000 + 0x800;
    data_020e9240               = (s32) (p0 >> 12);
    p1                          = (s64) temp_lr * 0x2000 + 0x800;
    data_020e923c               = (s32) (p1 >> 12);
}
