#include "m2c.h"

u8 func_02083544(s32 *arg0, s32 arg1, void *arg2) {
    s32 temp_r1;
    u8 var_r0;

    temp_r1                     = *arg0;
    M2C_FIELD(arg2, s32 *, 0)   = temp_r1;
    M2C_FIELD(arg2, s32 *, 0xC) = 0x22;
    if (temp_r1 != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
