#include "m2c.h"

M2C_UNK func_020738c4(u8);
s32 func_02084450(M2C_UNK, M2C_UNK, s32 *);

s32 func_020a58f8(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0[4];
    s32 temp_r4;

    temp_r4 = func_02084450(arg0, arg1, sp0);
    func_020738c4((u8) sp0[0]);
    return temp_r4;
}
