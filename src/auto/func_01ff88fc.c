#include "m2c.h"

s32 func_01ff88fc(s32 arg0, s32 arg1) {
    s64 temp = (s64) arg0 * arg1 + 0x80000;
    return (s32) (temp >> 0x14);
}
