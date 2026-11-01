#include "m2c.h"

s32 func_01ff87ec(s32 a, s32 b, s32 c, s32 d) {
    s64 v;

    v = (s64) a * b;
    v -= (s64) c * d;
    return (s32) ((v + 0x800) >> 12);
}
