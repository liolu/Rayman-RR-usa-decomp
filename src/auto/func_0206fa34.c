#include "m2c.h"

#define MUL(a, b) ((s32) ((((s64) (a)) * (b) + 0x800) >> 12))

void func_0206fa34(s32 *arg0, s32 *arg1, s32 *arg2) {
    s32 s;

    s       = arg1[0];
    arg0[0] = MUL(s, arg2[0]);
    arg0[3] = MUL(s, arg2[3]);
    arg0[6] = MUL(s, arg2[6]);
    s       = arg1[1];
    arg0[1] = MUL(s, arg2[1]);
    arg0[4] = MUL(s, arg2[4]);
    arg0[7] = MUL(s, arg2[7]);
    s       = arg1[2];
    arg0[2] = MUL(s, arg2[2]);
    arg0[5] = MUL(s, arg2[5]);
    arg0[8] = MUL(s, arg2[8]);
}
