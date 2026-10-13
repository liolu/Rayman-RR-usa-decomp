#include "m2c.h"

s32 func_02084450();            /* extern */
s32 *func_02084cc4();                        /* extern */

s32 func_0209a8e8(M2C_UNK arg0, void *arg1, void *arg2) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r6;
    s32 var_r0;

    temp_r4_2 = M2C_FIELD(arg1, volatile s32 *, -8);
    temp_r0   = func_02084450();
    temp_r1   = temp_r0;
    temp_r6   = M2C_FIELD(arg2, volatile s32 *, 0);
    if (temp_r4_2 != 0x2A) {
        if (temp_r4_2 != 0x2B) {
            return temp_r0;
        }
        temp_r4 = func_02084450(arg0, temp_r1, arg2);
        if (func_02084cc4(temp_r6, (u8) M2C_FIELD(arg2, volatile s32 *, 0)) == NULL) {
            var_r0 = 0;
        } else if (*func_02084cc4(temp_r6, (u8) M2C_FIELD(arg2, volatile s32 *, 0)) != 2) {
            var_r0 = 0;
        } else {
            var_r0 = M2C_FIELD(func_02084cc4(temp_r6, (u8) M2C_FIELD(arg2, volatile s32 *, 0)), s32 *, 4);
        }
        M2C_FIELD(arg2, volatile s32 *, 0)   = var_r0;
        M2C_FIELD(arg2, volatile s32 *, 0xC) = 0xB;
        return temp_r4;
    }
    M2C_FIELD(arg2, volatile s32 *, 0)   = (s32) * (u8 *) temp_r6;
    M2C_FIELD(arg2, volatile s32 *, 0xC) = 6;
    return temp_r0;
}
