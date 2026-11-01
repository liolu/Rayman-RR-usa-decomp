#include "m2c.h"

s32 func_01ff8858(s32 arg0, s32 arg1, s32 arg2);

u8 func_0207f4e8(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 d;
    s64 sq;

    d  = func_01ff8858(arg0[0] - arg1[0], arg0[1] - arg1[1], arg0[2] - arg1[2]);
    sq = (s64) arg2 * arg2;
    sq = sq + 0x800;
    return d <= (s32) (sq >> 12) ? 1 : 0;
}
