#include "m2c.h"

M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern u8 data_020bbfe4;
extern M2C_UNK data_020c3c24;
extern M2C_UNK data_020c3c2c;
extern M2C_UNK data_020c3c2e;
extern M2C_UNK data_020c3e78;

s16 func_0201981c(s32 arg0) {
    M2C_UNK *var_r2;
    s16 var_r4;
    s32 temp_lr;

    if (M2C_FIELD(&data_020c3c24, s16 *, 2) == 0) {
        func_0207ad9c(1, data_020bbfe4, 0, 2, -1, 0xFF, 0xFF, 0);
        return 0x7FFF;
    }
    if (M2C_FIELD(&data_020c3c24, s16 *, 0) == 0x10) {
        func_0207ad9c(1, data_020bbfe4, 0, 7, -1, 0xFF, 0xFF, 0);
        return 0x7FFF;
    }
    if (arg0 > 2) {
        func_0207ad9c(1, data_020bbfe4, 0, 3, -1, 0xFF, 0xFF, 0);
        return 0x7FFF;
    }
    if (*((M2C_UNK *) ((s8 *) &data_020c3e78 + (arg0 * 4))) == 0) {
        func_0207ad9c(1, data_020bbfe4, 0, 4, -1, 0xFF, 0xFF, 0);
        return 0x7FFF;
    }
    var_r2 = &data_020c3c2c;
    var_r4 = 0;
loop_9:
    if (M2C_FIELD(var_r2, s16 *, 2) != 0) {
        var_r4 += 1;
        var_r2 = (M2C_UNK *) ((s8 *) var_r2 + 0x24);
        if ((s32) var_r4 < 0x10) {
            goto loop_9;
        }
    }
    if (var_r4 == 0x10) {
        func_0207ad9c(1, data_020bbfe4, 0, 7, -1, 0xFF, 0xFF, 0);
        return 0x7FFF;
    }
    temp_lr                                    = var_r4 * 0x24;
    *(s16 *) ((s8 *) &data_020c3c2c + temp_lr) = (s16) arg0;
    *(s16 *) ((s8 *) &data_020c3c2e + temp_lr) = 1;
    M2C_FIELD(&data_020c3c24, s16 *, 0)        = (s16) (M2C_FIELD(&data_020c3c24, s16 *, 0) + 1);
    return var_r4;
}
