#include "m2c.h"

s32 func_02084008(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0)   = 0;
    M2C_FIELD(arg2, s32 *, 0xC) = 0x14;
    return arg1 + 8;
}
