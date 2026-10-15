#include "m2c.h"

s32 func_02084450();

s32 func_02083e6c(M2C_UNK arg0, s32 arg1, void *arg2) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r1;
    s32 var_r6;
    s32 var_r7;
    s32 res;

    temp_r1 = func_02084450(arg0, arg1 + 8);
    if (M2C_FIELD(arg2, s32 *, 0xC) == 8) {
        var_r6 = M2C_FIELD(arg2, s32 *, 0);
    } else {
        var_r6 = M2C_FIELD(arg2, s32 *, 0) << 0xC;
    }
    temp_r1_2 = func_02084450(arg0, temp_r1, arg2);
    if (M2C_FIELD(arg2, s32 *, 0xC) == 8) {
        var_r7 = M2C_FIELD(arg2, s32 *, 0);
    } else {
        var_r7 = M2C_FIELD(arg2, s32 *, 0) << 0xC;
    }
    res = func_02084450(arg0, temp_r1_2, arg2);
    if (M2C_FIELD(arg2, s32 *, 0xC) == 8) {
        var_r1 = M2C_FIELD(arg2, s32 *, 0);
    } else {
        var_r1 = M2C_FIELD(arg2, s32 *, 0) << 0xC;
    }
    M2C_FIELD(arg2, s32 *, 0)   = var_r6;
    M2C_FIELD(arg2, s32 *, 4)   = var_r7;
    M2C_FIELD(arg2, s32 *, 8)   = var_r1;
    M2C_FIELD(arg2, s32 *, 0xC) = 0x15;
    return res;
}
