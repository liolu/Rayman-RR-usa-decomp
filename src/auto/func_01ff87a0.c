#include "m2c.h"

s32 func_01ff87a0(s32 a, s32 b, s32 c) {
    s64 v;

    v = (s64) b * b - (((s64) a * c) << 2);
    return (s32) ((v + 0x800) >> 12);
}
