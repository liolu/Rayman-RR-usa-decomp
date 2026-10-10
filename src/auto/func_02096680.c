#include "m2c.h"

extern u8 data_020dbfd1;

s32 func_02096680(s32 arg0, s32 arg1, void *arg2) {
    s32 var_r0;

    if (data_020dbfd1 != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    M2C_FIELD(arg2, s32 *, 0)   = var_r0;
    M2C_FIELD(arg2, s32 *, 0xC) = 6;
    return arg1;
}
