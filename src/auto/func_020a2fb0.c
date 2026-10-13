#include "m2c.h"

M2C_UNK func_020581b4();                            /* extern */
M2C_UNK func_020581b8();                            /* extern */
s32 func_02084450(M2C_UNK, M2C_UNK, s32 *);         /* extern */

s32 func_020a2fb0(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[16];
    s32 temp_r4;
    s32 var_r1;

    temp_r4 = func_02084450(arg0, arg1, (s32 *) sp0);
    var_r1  = *(s32 *) sp0;
    if (var_r1 == 0) {
        func_020581b8();
    } else {
        func_020581b4();
    }
    return temp_r4;
}
