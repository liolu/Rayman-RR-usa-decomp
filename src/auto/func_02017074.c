/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020160d0();
M2C_UNK MI_DmaCopy16(s32, M2C_UNK, s32, u32);
M2C_UNK MIi_CpuCopy16(M2C_UNK, s32, u32);
extern s32 GXi_DmaId;

void func_02017074(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_020160d0();
    if ((GXi_DmaId != -1) && (arg2 > 0x1CU)) {
        MI_DmaCopy16(GXi_DmaId, arg0, temp_ip + arg1, arg2);
        return;
    }
    MIi_CpuCopy16(arg0, temp_ip + arg1, arg2);
}
