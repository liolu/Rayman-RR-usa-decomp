#include "m2c.h"

s32 func_02060aac(s32, s32, M2C_UNK, u16);
s32 func_02060e14(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32 *);

s32 func_02060eec(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, u16 arg4) {
    s32 sp4;
    s32 temp_r0;

    temp_r0 = func_02060e14(arg0, 2, arg1, arg2, &sp4);
    if (temp_r0 == 0) {
        return 0;
    }
    return func_02060aac(temp_r0, sp4, arg3, arg4);
}
