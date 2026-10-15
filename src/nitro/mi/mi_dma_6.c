/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MIi_DmaSetParams(M2C_UNK, M2C_UNK, M2C_UNK, s32);
M2C_UNK OSi_EnterDmaCallback(M2C_UNK, M2C_UNK (*)(s32), s32);
M2C_UNK MIi_CheckDma0SourceAddress(M2C_UNK, M2C_UNK, u32, M2C_UNK);
M2C_UNK MI_WaitDma(M2C_UNK);

void MI_DmaCopy32Async(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, u32 arg3, M2C_UNK (*arg4)(s32), s32 arg5) {
    MIi_CheckDma0SourceAddress(arg0, arg1, arg3, 0);
    if (arg3 == 0) {
        if (arg4 == NULL) {
            return;
        }
        arg4(arg5);
        return;
    }
    MI_WaitDma(arg0);
    if (arg4 != NULL) {
        OSi_EnterDmaCallback(arg0, arg4, arg5);
        MIi_DmaSetParams(arg0, arg1, arg2, (arg3 >> 2) | 0xC4000000);
        return;
    }
    MIi_DmaSetParams(arg0, arg1, arg2, (arg3 >> 2) | 0x84000000);
}
