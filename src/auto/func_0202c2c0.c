#include "m2c.h"

M2C_UNK func_0207ac90(M2C_UNK);                     /* extern */
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern u8 data_020bc538;
extern M2C_UNK data_020c75c8;

s32 func_0202c2c0(void) {
    u32 temp_r1;

    if ((u32) M2C_FIELD(&data_020c75c8, u32 *, 0xCC) > 0x32U) {
        func_0207ac90(0);
        func_0207ad9c(7, data_020bc538, 0, 5, -1, 0xFF, 0xFF, 0);
    }
    temp_r1                                = M2C_FIELD(&data_020c75c8, u32 *, 0xCC) + 1;
    M2C_FIELD(&data_020c75c8, u32 *, 0xCC) = temp_r1;
    return temp_r1 - 1;
}
