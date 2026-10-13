#include "m2c.h"

s32 func_0202e210(void *arg0) {
    s32 temp_r1;
    s32 var_r3;
    s32 temp_r0;

    if ((u32) M2C_FIELD(arg0, u32 *, 0) <= 3U) {
        return 0x1000;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x14);
    var_r3  = M2C_FIELD(arg0, s32 *, 0x10);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x18);
    if ((var_r3 > temp_r1 ? var_r3 : temp_r1) > temp_r0) {
        var_r3 = (var_r3 > temp_r1) ? var_r3 : temp_r1;
    } else {
        var_r3 = temp_r0;
    }
    return var_r3;
}
