#include "m2c.h"

M2C_UNK func_020015f4(s32, M2C_UNK, s32);           /* extern */
s32 func_0202fd3c(s32, M2C_UNK);                    /* extern */
M2C_UNK func_02030ac0(u8, u8, M2C_UNK);             /* extern */
M2C_UNK func_0207ac90(M2C_UNK);                     /* extern */
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern u8 data_020bd280;
extern u8 data_020dce94;

s32 func_0205703c(s32 arg0) {
    s32 temp_r0;

    if (arg0 == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 6, -1, 0xFF, 0xFF, 0);
    }
    if ((u32) data_020dce94 > 1U) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 5, -1, 0xFF, 0xFF, 0);
    }
    func_02030ac0(data_020bd280, data_020dce94, 0);
    temp_r0 = func_0202fd3c(arg0, 0);
    if (temp_r0 == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 7, -1, 0xFF, 0xFF, 0);
    }
    func_020015f4(temp_r0, 0, arg0);
    return temp_r0;
}
