#include "m2c.h"

s32 func_0207abe0(u8, M2C_UNK);                     /* extern */
M2C_UNK func_0207ac90(M2C_UNK);                     /* extern */
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
void *func_02082918(M2C_UNK);                       /* extern */
extern u8 data_020bc544;
extern u8 data_020becb8;

void *func_02085574(s32 arg0, M2C_UNK arg1) {
    void *temp_r4;
    void *temp_r5;

    temp_r4 = func_02082918(0xC);
    if (func_0207abe0(data_020bc544, 0) != 0) {
        func_0207ac90(0);
        func_0207ad9c(0x42, data_020becb8, 0, 0xC, -1, 0xFF, 0xFF, 0);
    }
    M2C_FIELD(temp_r4, s32 *, 0) = arg0;
    M2C_FIELD(temp_r4, s32 *, 4) = 0;
    temp_r5                      = func_02082918(arg1);
    if (func_0207abe0(data_020bc544, 0) != 0) {
        func_0207ac90(0);
        func_0207ad9c(0x42, data_020becb8, 0, 0xC, -1, 0xFF, 0xFF, 0);
    }
    M2C_FIELD(temp_r4, void **, 8) = temp_r5;
    return temp_r4;
}
