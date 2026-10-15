#include "m2c.h"

M2C_UNK _fdiv(s32, s32);
s32 func_0200a42c(s32);

void func_020758a0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r4;
    u8 temp_r5;

    temp_r5 = M2C_FIELD((arg0 + arg1), u8 *, 3);
    temp_r4 = func_0200a42c(arg3 - temp_r5);
    _fdiv(temp_r4, func_0200a42c(M2C_FIELD((arg0 + arg2), u8 *, 3) - temp_r5));
}
