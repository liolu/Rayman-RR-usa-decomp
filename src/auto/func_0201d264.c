#include "m2c.h"

M2C_UNK memset(s32, M2C_UNK, M2C_UNK);
M2C_UNK func_0201d43c(M2C_UNK, M2C_UNK *);
s32 func_0202fd3c(M2C_UNK, M2C_UNK);
M2C_UNK func_02030ac0(u8, M2C_UNK, M2C_UNK);
s32 func_0207abe0(u8, M2C_UNK);
M2C_UNK func_0207ac90(M2C_UNK);
extern M2C_UNK data_020bc040;
extern u8 data_020bc050;
extern u8 data_020bc544;

s32 func_0201d264(M2C_UNK arg0, M2C_UNK arg1) {
    s32 var_r4;

    func_02030ac0(data_020bc050, arg0, 0);
    var_r4 = func_0202fd3c(arg1, 0);
    if (func_0207abe0(data_020bc544, 0) != 0) {
        func_0207ac90(0);
        func_0201d43c(8, &data_020bc040);
        var_r4 = 0;
    }
    memset(var_r4, 0, arg1);
    return var_r4;
}
