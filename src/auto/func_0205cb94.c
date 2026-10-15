#include "m2c.h"

M2C_UNK func_0207ac90(M2C_UNK);
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32);
extern M2C_UNK data_020bd160;
extern u8 data_020bd280;

void func_0205cb94(void) {
    if ((M2C_FIELD(&data_020bd160, s32 *, 0x108) == 1) && (M2C_FIELD(&data_020bd160, s32 *, 0x10C) == 2) &&
        (M2C_FIELD(&data_020bd160, s32 *, 0x110) == 3) && (M2C_FIELD(&data_020bd160, s32 *, 0x114) == 4) &&
        (M2C_FIELD(&data_020bd160, s32 *, 0x118) == 5) && (M2C_FIELD(&data_020bd160, s32 *, 0x11C) == 6)) {
        return;
    }
    func_0207ac90(0);
    func_0207ad9c(0x30, data_020bd280, 0, 0x15, -1, 0xFF, 0xFF, 0);
}
