#include "m2c.h"

M2C_UNK memset(s32, M2C_UNK, s32);
s32 func_0202fd3c(s32, M2C_UNK);
M2C_UNK func_02030ac0(u8, u8, M2C_UNK);
extern M2C_UNK data_020bd004;

s32 func_020548e0(s32 arg0) {
    s32 var_r4;

    func_02030ac0(M2C_FIELD(&data_020bd004, u8 *, 0), (u8) (M2C_FIELD(&data_020bd004, u8 *, 1) + 2), 0);
    var_r4 = 0;
    if (arg0 != 0) {
        var_r4 = func_0202fd3c(arg0, 0);
    }
    memset(var_r4, 0, arg0);
    return var_r4;
}
