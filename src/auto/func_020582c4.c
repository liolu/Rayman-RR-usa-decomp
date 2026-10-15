#include "m2c.h"

M2C_UNK func_020045ec(s8 *);
M2C_UNK func_0207ac90(M2C_UNK);
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32);
extern u8 data_020bd280;

void func_020582c4(s8 *arg0) {
    s8 temp_r0;

    temp_r0 = *arg0;
    if (((s32) temp_r0 < 0x30) && ((s32) temp_r0 > 0x39)) {
        if ((temp_r0 != 0x2B) && (temp_r0 != 0x2D)) {
            func_0207ac90(0);
            func_0207ad9c(0x30, data_020bd280, 0, 0x18, -1, 0xFF, 0xFF, 0);
        }
    }
    func_020045ec(arg0);
}
