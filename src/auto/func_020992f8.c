#include "m2c.h"

s32 func_02084450();

s32 func_020992f8(s32 arg0, s32 arg1, void *arg2) {
    s32 var_r0;
    s32 var_r1;

    var_r0 = func_02084450();
    if (M2C_FIELD(arg2, s32 *, 0xC) != 8) {
        var_r1 = M2C_FIELD(arg2, s32 *, 0) << 0xC;
    } else {
        var_r1 = M2C_FIELD(arg2, s32 *, 0);
    }
    if (var_r1 < 0) {
        var_r1 = 0 - var_r1;
    }
    M2C_FIELD(arg2, s32 *, 0)   = var_r1;
    M2C_FIELD(arg2, s32 *, 0xC) = 8;
    return var_r0;
}
