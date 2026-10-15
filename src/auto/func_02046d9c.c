#include "m2c.h"

M2C_UNK func_0202f9b0(M2C_UNK, u8, s32, M2C_UNK, s32, s32, s32);
M2C_UNK func_02030ac0(u8, M2C_UNK, M2C_UNK);
M2C_UNK func_02030be4(u8, M2C_UNK, s32);
extern u8 data_020bc8fc;
extern M2C_UNK data_020cf6cc;
extern M2C_UNK data_020d00d4;

s32 func_02046d9c(void) {
    if (M2C_FIELD(&data_020d00d4, s16 *, 2) != 0) {
        return 0;
    }
    func_02030be4(data_020bc8fc, 1, 0x186A0);
    func_0202f9b0(0, data_020bc8fc, *((M2C_UNK *) ((s8 *) &data_020cf6cc + (data_020bc8fc * 4))), 0x400, 0x186A0, 4, 0xD);
    func_02030ac0(data_020bc8fc, 0, 0);
    M2C_FIELD(&data_020d00d4, s16 *, 2) = 1;
    return 0;
}
