#include "m2c.h"

extern M2C_UNK data_020cfff0;
extern M2C_UNK data_020d0008;
extern M2C_UNK data_020d0048;
extern M2C_UNK data_020d0088;
extern s32 data_020d00c8;

s32 func_02046988(s32 arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r3;
    void *temp_ip;

    if (M2C_FIELD(&data_020cfff0, s16 *, 0) == 0) {
        data_020d00c8 = 0x1001;
        return 0x7FFF;
    }
    if ((arg0 < 0) || (arg0 > 0xF)) {
        data_020d00c8 = 0x1005;
        return 0x7FFF;
    }
    if (!(M2C_FIELD(&data_020cfff0, u16 *, 0xC) & (1 << arg0))) {
        data_020d00c8 = 0x1002;
        return 0x7FFF;
    }
    if (arg1 != (arg1 & ((1 << M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_020d0088 + (arg0 * 4))), u16 *, 6)) - 1))) {
        data_020d00c8 = 0x1004;
        return 0x7FFF;
    }
    temp_ip = *((M2C_UNK *) ((s8 *) &data_020d0048 + (arg0 * 4)));
    if ((u32) M2C_FIELD(temp_ip, u16 *, 0xE) < 2U) {
        return 0x7FFD;
    }
    if (arg1 == (arg1 & M2C_FIELD(temp_ip, s32 *, 4))) {
        var_r3 = M2C_FIELD(temp_ip, u16 *, 0xC) - 1;
        if (var_r3 < 0) {
            var_r3 += M2C_FIELD(&data_020cfff0, s16 *, 0x14);
        }
        if (!(arg1 & M2C_FIELD((*((M2C_UNK *) ((s8 *) &data_020d0008 + (arg0 * 4))) + (var_r3 * 0x10)), s32 *, 4))) {
            var_r0 = 0x7FFE;
        } else {
            var_r0 = 0x7FFD;
        }
    } else {
        var_r0 = 0x7FFD;
    }
    return var_r0;
}
