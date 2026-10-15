#include "m2c.h"

M2C_UNK func_0201d43c(M2C_UNK, M2C_UNK *);
s32 func_02030248(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02030ac0(u8, M2C_UNK, M2C_UNK);
s32 func_0207abe0(u8, M2C_UNK);
M2C_UNK func_0207ac90(M2C_UNK);
extern M2C_UNK data_020bc044;
extern u8 data_020bc050;
extern u8 data_020bc544;

s32 func_0201d2e8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r4;

    func_02030ac0(data_020bc050, arg0, 0);
    temp_r4 = func_02030248(arg1, arg2, 0);
    if (func_0207abe0(data_020bc544, 0) != 0) {
        func_0207ac90(0);
        func_0201d43c(8, &data_020bc044);
    }
    return temp_r4;
}
