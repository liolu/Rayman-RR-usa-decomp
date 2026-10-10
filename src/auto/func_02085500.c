#include "m2c.h"

s32 func_0207abe0(u8, M2C_UNK);                     /* extern */
M2C_UNK func_0207ac90(M2C_UNK);                     /* extern */
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
s32 func_02082918();                                /* extern */
extern u8 data_020bc544;
extern u8 data_020becb8;

s32 func_02085500(void) {
    s32 temp_r4;

    temp_r4 = func_02082918();
    if (func_0207abe0(data_020bc544, 0) != 0) {
        func_0207ac90(0);
        func_0207ad9c(0x42, data_020becb8, 0, 0xC, -1, 0xFF, 0xFF, 0);
    }
    return temp_r4;
}
