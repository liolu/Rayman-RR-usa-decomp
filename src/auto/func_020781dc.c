#include "m2c.h"

M2C_UNK DC_FlushRange(s32, s32);
M2C_UNK func_02017074(s32, M2C_UNK, s32);
M2C_UNK func_020170dc(s32, M2C_UNK, s32);
M2C_UNK GXS_LoadOAM(s32, M2C_UNK, s32);

void func_020781dc(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        DC_FlushRange(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x20));
        func_020170dc(M2C_FIELD(arg0, s32 *, 0x18), 0, M2C_FIELD(arg0, s32 *, 0x20));
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        DC_FlushRange(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x20));
        func_02017074(M2C_FIELD(arg0, s32 *, 0x1C), 0, M2C_FIELD(arg0, s32 *, 0x20));
    }
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    DC_FlushRange(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x24));
    GXS_LoadOAM(M2C_FIELD(arg0, s32 *, 0x28), 0, M2C_FIELD(arg0, s32 *, 0x24));
}
