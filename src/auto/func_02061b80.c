#include "m2c.h"

s32 G2_GetBG3ScrPtr();
M2C_UNK MI_DmaFill32(s32, s32, M2C_UNK, M2C_UNK);
extern s32 GXi_DmaId;

void func_02061b80(void) {
    s32 temp_r4;

    temp_r4 = GXi_DmaId;
    MI_DmaFill32(temp_r4, G2_GetBG3ScrPtr(), 0, 0xC000);
}
