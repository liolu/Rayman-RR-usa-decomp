#include "m2c.h"

M2C_UNK func_020300d4(s32, M2C_UNK);                /* extern */
M2C_UNK func_02030ac0(u8, M2C_UNK, M2C_UNK);        /* extern */
s32 func_0207abe0(u8, M2C_UNK);                     /* extern */
M2C_UNK func_0207ac90(M2C_UNK);                     /* extern */
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern u8 data_020bc544;
extern u8 data_020bc8fc;
extern M2C_UNK data_020cfff0;
extern s32 data_020d0008;
extern s32 data_020d0048;
extern s32 data_020d0088;

s32 func_020457dc(void) {
    s32 var_r10;

    if (M2C_FIELD(&data_020cfff0, s16 *, 0) == 1) {
        var_r10 = 0;
        do {
            if ((&data_020d0088)[var_r10] != 0) {
                func_02030ac0(data_020bc8fc, 0, 0);
                func_020300d4((&data_020d0088)[var_r10], 0);
                if (func_0207abe0(data_020bc544, 0) != 0) {
                    func_0207ac90(0);
                    func_0207ad9c(2, data_020bc8fc, 0, 0x12, -1, 0xFF, 0xFF, 0);
                }
                (&data_020d0088)[var_r10] = 0;
            }
            if ((&data_020d0048)[var_r10] != 0) {
                func_02030ac0(data_020bc8fc, 0, 0);
                func_020300d4((&data_020d0048)[var_r10], 0);
                if (func_0207abe0(data_020bc544, 0) != 0) {
                    func_0207ac90(0);
                    func_0207ad9c(2, data_020bc8fc, 0, 0x12, -1, 0xFF, 0xFF, 0);
                }
                (&data_020d0048)[var_r10] = 0;
            }
            if ((&data_020d0008)[var_r10] != 0) {
                func_02030ac0(data_020bc8fc, 0, 0);
                func_020300d4((&data_020d0008)[var_r10], 0);
                if (func_0207abe0(data_020bc544, 0) != 0) {
                    func_0207ac90(0);
                    func_0207ad9c(2, data_020bc8fc, 0, 0x12, -1, 0xFF, 0xFF, 0);
                }
                (&data_020d0008)[var_r10] = 0;
            }
            var_r10 += 1;
        } while (var_r10 < 0x10);
        M2C_FIELD(&data_020cfff0, s16 *, 0xC) = 0;
        M2C_FIELD(&data_020cfff0, s16 *, 4)   = 0;
    }
    return 0;
}
