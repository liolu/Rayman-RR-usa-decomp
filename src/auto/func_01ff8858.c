#include "m2c.h"

s32 func_01ff8858(s32 arg0, s32 arg1, s32 arg2) {
    s64 temp = (s64) arg0 * arg0 + (s64) arg1 * arg1 + (s64) arg2 * arg2 + 0x800;
    return (s32) (temp >> 0xC);
}
