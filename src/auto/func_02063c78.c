#include "m2c.h"

s32 func_02062160(u16, M2C_UNK);
s32 *func_02063cec(u16);

s32 *func_02063c78(s32 *arg0, void *arg1, void **arg2, s32 *arg3) {
    s32 temp_r1;
    s32 var_r0;
    u16 temp_r0;
    u16 temp_r2;

    temp_r0 = M2C_FIELD(arg1, u16 *, 2);
    if (temp_r0 == 0xFFFF) {
        var_r0 = 0;
    } else {
        temp_r1 = func_02062160(temp_r0, 0) - M2C_FIELD(M2C_FIELD(*arg2, void **, 0x14), s32 *, 0x10);
        var_r0  = (s32) (temp_r1 + ((u32) (temp_r1 >> 4) >> 0x1B)) >> 5;
    }
    *arg3   = var_r0;
    temp_r2 = M2C_FIELD(arg1, u16 *, 0);
    if (temp_r2 != 0xFFFF) {
        *arg0 = func_02063cec(temp_r2);
    }
    return arg0;
}
