#include "m2c.h"

s32 func_01ff8778(s32 *arg0) {
    s64 v;

    v = (s64) arg0[0] * arg0[0] + (s64) arg0[1] * arg0[1];
    v += (s64) arg0[2] * arg0[2];
    return (s32) ((v + 0x800) >> 12);
}
