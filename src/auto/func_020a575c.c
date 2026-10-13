#include "m2c.h"

void func_02059dc4(M2C_UNK, M2C_UNK);               /* extern */
s32 func_02084450(M2C_UNK, s32, s32 *);             /* extern */

s32 func_020a575c(M2C_UNK arg0, s32 arg1) {
    s32 buf[4];
    s32 temp_r1;
    s32 temp_r4;
    s32 var_r1;
    s32 var_r5;

    temp_r1 = func_02084450(arg0, arg1, buf);
    if (buf[3] == 8) {
        var_r5 = buf[0];
    } else {
        var_r5 = buf[0] << 0xC;
    }
    temp_r4 = func_02084450(arg0, temp_r1, buf);
    if (buf[3] == 8) {
        var_r1 = buf[0];
    } else {
        var_r1 = buf[0] << 0xC;
    }
    func_02059dc4(var_r5, var_r1);
    return temp_r4;
}
