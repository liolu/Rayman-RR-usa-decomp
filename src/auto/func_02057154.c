#include "m2c.h"

M2C_UNK func_020300d4(s32, M2C_UNK);
M2C_UNK func_02030ac0(u8, u8, M2C_UNK);
M2C_UNK func_0207ac90(M2C_UNK);
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32);
extern u8 data_020bd280;
extern u8 data_020dce94;

void func_02057154(s32 arg0) {
    if (arg0 == 0) {
        func_0207ad9c(0x30, data_020bd280, 0, 0x46, -1, 0, 0, 0);
        func_0207ac90(0);
        return;
    }
    func_02030ac0(data_020bd280, data_020dce94, 0);
    func_020300d4(arg0, 0);
}
