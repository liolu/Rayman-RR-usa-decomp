#include "m2c.h"

M2C_UNK func_02069190(s32);
M2C_UNK func_0207ac90(M2C_UNK);
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32);
extern u8 data_020bd280;

void func_0206901c(void *arg0) {
    s32 temp_r4;

    if (arg0 == NULL) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xE, -1, 0xFF, 0xFF, 0);
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_r4 == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xF, -1, 0xFF, 0xFF, 0);
    }
    func_02069190(temp_r4);
}
