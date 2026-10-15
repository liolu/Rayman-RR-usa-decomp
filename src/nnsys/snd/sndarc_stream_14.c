/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *NNS_SndArcGetStrmInfo(s32);
s32 PrepareStrm(M2C_UNK, void *, u8, u8, s32, s32, s32, s32, s32, s32);

s32 NNS_SndArcStrmPrepare(M2C_UNK arg0, s32 arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = NNS_SndArcGetStrmInfo(arg1);
    if (temp_r0 == NULL) {
        return 0;
    }
    return PrepareStrm(arg0, temp_r0, M2C_FIELD(temp_r0, u8 *, 6), M2C_FIELD(temp_r0, u8 *, 5), arg1, arg2, 0, 0, 0, 0);
}
