#include "m2c.h"

M2C_UNK G3X_SetClearColor(u16, M2C_UNK, s32, M2C_UNK, s32);
M2C_UNK MI_WaitDma(M2C_UNK);
extern u8 data_020dba79;
extern M2C_UNK data_020dbb38;

s32 func_02052390(s32 arg0, u32 arg1) {
    u16 var_r0;
    u32 temp_r2;
    void *temp_r4;

    temp_r4 = ((s32 *) &data_020dbb38)[((s32) ((arg1 + (arg1 >> 0x1F)) << 0xF) >> 0x10)];
    MI_WaitDma(0);
    if (data_020dba79 != 0) {
        var_r0 = 0;
    } else {
        temp_r2 = M2C_FIELD(temp_r4, u32 *, 0x6C);
        var_r0 =
            ((temp_r2 >> 3) & 0x1F) | ((u32) ((temp_r2 >> 0xB) << 0x1B) >> 0x16) | ((u32) ((temp_r2 >> 0x13) << 0x1B) >> 0x11);
    }
    G3X_SetClearColor(var_r0, 0x1F, 0x7FFF, 0x3F, 0);
    return 1;
}
