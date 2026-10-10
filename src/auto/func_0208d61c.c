#include "m2c.h"

s32 func_02032ed0(M2C_UNK, M2C_UNK, s32);           /* extern */
s32 func_02033090(M2C_UNK, M2C_UNK, s32);           /* extern */
s32 func_0208d6dc(s32);                             /* extern */

void func_0208d61c(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 *arg3, s32 *arg4, s32 arg5) {
    s32 temp_r0;
    s32 var_r2;

    *arg3   = func_02032ed0(arg1, arg2, arg5);
    temp_r0 = func_02033090(arg1, arg2, arg5);
    if (temp_r0 >= 0) {
        var_r2 = temp_r0;
    } else {
        var_r2 = 0 - temp_r0;
    }
    *arg4 = temp_r0;
    if (var_r2 > 0x1922) {
        if (temp_r0 > 0) {
            *arg4 = 0x3244 - temp_r0;
        } else {
            *arg4 = 0xFFFFCDBC - temp_r0;
        }
    }
    *arg3 = func_0208d6dc(*arg3);
    *arg4 = func_0208d6dc(*arg4);
}
