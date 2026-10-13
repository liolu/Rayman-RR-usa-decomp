#include "m2c.h"

M2C_UNK func_02049b60(s32);                         /* extern */
s32 func_02084450(M2C_UNK, M2C_UNK, s32 *);         /* extern */

s32 func_020a2fe8(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0[4];
    s32 temp_r4;

    temp_r4 = func_02084450(arg0, arg1, sp0);
    func_02049b60(sp0[0]);
    return temp_r4;
}
