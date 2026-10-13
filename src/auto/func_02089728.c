#include "m2c.h"

s32 func_0208d6ac(s32);                             /* extern */
s32 func_0208d6dc(s32);                             /* extern */
extern M2C_UNK data_020dd7a4;

void func_02089728(s32 arg0, s32 *arg1, volatile s32 *arg2, s32 *arg3, s32 arg4, s32 arg5) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r2;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;

    var_r6 = arg4;
    if (arg5 >= 0x3244) {
        *arg2 = *arg1;
        return;
    }
    if (arg5 > 0) {
        var_r4 = var_r6 - (arg5 + 0x10);
        if (var_r4 < 0) {
            var_r4 += 0x6488;
        }
        var_r5  = var_r6 + (arg5 + 0x10);
        temp_r1 = *arg1;
        if (var_r5 > 0x6488) {
            var_r5 += -0x6488;
        }
        var_r0 = 0;
        if (var_r5 > var_r4) {
            if (temp_r1 >= var_r4) {
                if (temp_r1 <= var_r5) {
                    var_r0 = 1;
                }
            }
        } else {
            if ((temp_r1 > var_r5) && (temp_r1 < var_r4)) {
                var_r0 = 1;
            }
            if (var_r0 == 0) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
        }
        if (var_r0 == 0) {
            if (func_0208d6ac(temp_r1 - var_r6) > 0) {
                var_r6 = var_r5;
            } else {
                var_r6 = var_r4;
            }
        } else {
            var_r6 = temp_r1;
        }
    }
    temp_r0 = func_0208d6ac(var_r6 - *arg1);
    *arg3   = temp_r0;
    if (temp_r0 >= 0) {
        var_r2 = temp_r0;
    } else {
        var_r2 = 0 - temp_r0;
    }
    if (var_r2 >= (s32) M2C_FIELD(&data_020dd7a4, s32 *, 0x70)) {
        temp_r0_2 = *arg1;
        if (temp_r0 > 0) {
            var_r0_2 = temp_r0_2 + M2C_FIELD(&data_020dd7a4, s32 *, 0x70);
        } else {
            var_r0_2 = temp_r0_2 - M2C_FIELD(&data_020dd7a4, s32 *, 0x70);
        }
        *arg2 = var_r0_2;
        *arg2 = func_0208d6dc(*arg2);
    } else {
        *arg2 = var_r6;
    }
    *arg1 = var_r6;
}
