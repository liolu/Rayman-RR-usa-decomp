#include "m2c.h"

s32 func_02072874(M2C_UNK, s32);                    /* extern */
extern s32 data_020ddf44;
extern void *data_020ddf70;
extern s32 data_020ddf78;
extern s32 data_020ddfa0;
extern s32 data_020de06c;

void func_02072524(void) {
    s32 temp_r0;
    s32 var_r2;
    u16 temp_r4;
    u16 var_r0;

    var_r2 = data_020ddfa0;
    if (var_r2 & 3) {
        do {
            var_r2 += 1;
        } while (var_r2 & 3);
    }
    data_020ddfa0                         = var_r2;
    temp_r4                               = M2C_FIELD(data_020ddf70, u16 *, 0x12);
    temp_r0                               = func_02072874(0xA, temp_r4);
    M2C_FIELD(data_020ddf70, s16 *, 0x30) = temp_r0;
    data_020ddf44                         = (temp_r0 * 0xC) + data_020de06c;
    data_020ddf78                         = data_020ddfa0;
    for (var_r0 = 0; var_r0 < temp_r4; var_r0++) {
        M2C_FIELD(data_020ddf44, u16 *, 6) = (u16) M2C_FIELD(data_020ddf78, u16 *, 2);
        M2C_FIELD(data_020ddf44, u16 *, 4) = (u16) M2C_FIELD(data_020ddf78, u16 *, 0);
        M2C_FIELD(data_020ddf44, s32 *, 0) = 0;
        M2C_FIELD(data_020ddf44, u16 *, 8) = (u16) M2C_FIELD(data_020ddf78, u16 *, 4);
        data_020ddf78 += 8;
        data_020ddf44 += 0xC;
    }
    data_020ddfa0 = data_020ddf78;
}
