#include "m2c.h"

s32 func_02060240(void *, M2C_UNK, u8);             /* extern */
M2C_UNK func_02060778(void *, s32, s32, M2C_UNK, s32, s32, s32 *); /* extern */
M2C_UNK func_020609dc(void *, s32, M2C_UNK, u16, s32, s32 *); /* extern */

void func_020606ec(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg3, u16 *arg4, u16 arg5) {
    s32 spC;
    s32 temp_r0;
    u16 temp_r4;

    temp_r4 = *arg4;
    spC     = 0;
    if (arg1 != 0) {
        func_020609dc(arg0, arg2, arg3, arg5, (s32) temp_r4, &spC);
    } else {
        temp_r0 = func_02060240(arg0, 2, (u8) (arg2 - 1));
        if (temp_r0 != 0) {
            func_02060778(arg0, temp_r0, M2C_FIELD(arg0, s32 *, 0x24), arg3, (s32) arg5, (s32) temp_r4, &spC);
        }
    }
    *arg4 = (u16) spC;
}
