#include "m2c.h"

s32 func_01ff87d0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s64 temp = (s64) arg0 * arg1 + (s64) arg2 * arg3 + 0x800;
    return (s32) (temp >> 0xC);
}
