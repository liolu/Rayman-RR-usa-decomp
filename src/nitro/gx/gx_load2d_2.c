/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void MI_DmaCopy32(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void MIi_CpuCopy32(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 GXi_DmaId;

void GXS_LoadOAM(s32 arg0, s32 arg1, s32 arg2) {
    if ((GXi_DmaId != -1) && ((u32) arg2 > 0x30U)) {
        MI_DmaCopy32(GXi_DmaId, arg0, arg1 + 0x07000400, arg2);
        return;
    }
    MIi_CpuCopy32(arg0, arg1 + 0x07000400, arg2);
}
