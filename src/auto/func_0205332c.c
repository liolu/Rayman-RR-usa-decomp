#include "m2c.h"

M2C_UNK GXx_SetMasterBrightness_(s32, s32);
extern M2C_UNK data_020bcbb8;

void func_0205332c(s32 arg0) {
    if (arg0 != 0) {
        GXx_SetMasterBrightness_(0x0400006C, M2C_FIELD(&data_020bcbb8, s32 *, 0x3C));
        GXx_SetMasterBrightness_(0x0400106C, M2C_FIELD(&data_020bcbb8, s32 *, 0x54));
        return;
    }
    GXx_SetMasterBrightness_(0x0400006C, -0x10);
    GXx_SetMasterBrightness_(0x0400106C, -0x10);
}
