#include "m2c.h"

s32 func_020424f0(s32);
s32 func_02084450();

s32 func_0209a99c(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_r4;

    temp_r4                     = func_02084450();
    M2C_FIELD(arg2, s32 *, 0)   = func_020424f0(M2C_FIELD(arg2, s32 *, 0));
    M2C_FIELD(arg2, s32 *, 0xC) = 6;
    return temp_r4;
}
