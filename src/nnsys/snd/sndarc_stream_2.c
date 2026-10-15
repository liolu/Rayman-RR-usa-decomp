/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MI_CpuCopy8(s32);

s32 ReadMemoryStream(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    MI_CpuCopy8(M2C_FIELD(arg0, s32 *, 0xA4) + arg3);
    return arg2;
}
