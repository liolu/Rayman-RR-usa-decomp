/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MI_CpuCopy8(s32, void *, M2C_UNK);
s32 NNS_SndArcGetFileAddress(M2C_UNK);

s32 OpenMemoryStream(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s32 *, 0xA4) = NNS_SndArcGetFileAddress(arg1);
    MI_CpuCopy8(M2C_FIELD(arg0, s32 *, 0xA4), arg0 + 0xA8, 0x40);
    return 1;
}
