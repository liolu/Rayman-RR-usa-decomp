#include "m2c.h"

M2C_UNK DC_FlushRange(M2C_UNK *, M2C_UNK);
M2C_UNK MI_DmaFill32(s32, M2C_UNK *, s32, M2C_UNK);
extern s32 GXi_DmaId;
extern M2C_UNK data_020dbb3c;

void func_020531dc(void) {
    DC_FlushRange(&data_020dbb3c, 0x400);
    MI_DmaFill32(GXi_DmaId, &data_020dbb3c, 0xC0C0C0C0, 0x400);
}
