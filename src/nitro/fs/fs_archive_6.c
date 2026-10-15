/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MI_CpuCopy8(M2C_UNK, s32, M2C_UNK);

s32 FSi_WriteMemCallback(void *arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    MI_CpuCopy8(arg1, M2C_FIELD(arg0, s32 *, 0x28) + arg2, arg3);
    return 0;
}
