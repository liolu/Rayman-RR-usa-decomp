#include "m2c.h"

extern s32 data_020cf6a8;
extern s32 data_020c76a8[];

s32 func_01ff83a8(s32 x) {
    s32 idx;
    s32 nxt;
    s32 lo;
    s32 hi;

    if (x < -0x100000) {
        x = -0x100000;
    }
    if (x > 0x100000) {
        x = 0x100000;
    }
    idx = (x + 0x100000) >> 8;
    if (idx == 0x4000) {
        return data_020cf6a8;
    }
    nxt = idx + 1;
    lo  = data_020c76a8[idx];
    hi  = data_020c76a8[nxt];
    return lo + (((x & 0xFF) * (hi - lo)) >> 8);
}
