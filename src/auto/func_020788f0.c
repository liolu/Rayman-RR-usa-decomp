#include "m2c.h"

s32 func_020787ec(void *, s32, s16);                 /* extern */
M2C_UNK func_0207884c(void *, s32, s16, s32);        /* extern */

void func_020788f0(void *arg0, s32 arg1) {
    s16 var_r4;
    s16 var_r5;
    s32 temp_r6;
    s32 var_r3;
    s32 var_r7;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r2;
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x34) + (arg1 * 8);
    var_r4  = M2C_FIELD(arg0, s16 *, 0x1C);
    temp_r2 = M2C_FIELD(temp_r1, u8 *, 1);
    var_r5  = M2C_FIELD(arg0, s16 *, 0x1E);
    if ((s32) var_r4 < (s32) temp_r2) {
        var_r4 = (s16) temp_r2;
    } else {
        temp_r0 = M2C_FIELD(temp_r1, u8 *, 2);
        if ((s32) var_r4 > (s32) temp_r0) {
            var_r4 = (s16) temp_r0;
        }
    }
    if ((s32) var_r5 < (s32) temp_r2) {
        var_r5 = (s16) temp_r2;
    } else {
        temp_r0_2 = M2C_FIELD(temp_r1, u8 *, 2);
        if ((s32) var_r5 > (s32) temp_r0_2) {
            var_r5 = (s16) temp_r0_2;
        }
    }
    var_r7  = func_020787ec(arg0, arg1, var_r4);
    temp_r6 = func_020787ec(arg0, arg1, var_r5);
    if (var_r7 == -1) {
        if (temp_r6 == -1) {
            func_0207884c(arg0, arg1, var_r4, 0);
            var_r7 = 0;
        } else {
            if (temp_r6 == 0) {
                var_r7 = 1;
            } else {
                var_r7 = 0;
            }
            func_0207884c(arg0, arg1, var_r4, var_r7);
        }
    }
    if (temp_r6 != -1) {
        return;
    }
    if (func_020787ec(arg0, arg1, var_r5) != -1) {
        return;
    }
    if (var_r7 == 0) {
        var_r3 = 1;
    } else {
        var_r3 = 0;
    }
    func_0207884c(arg0, arg1, var_r5, var_r3);
}
