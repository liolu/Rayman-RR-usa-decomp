/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK NNS_SndUnlockChannel();

void NNS_SndStrmFreeChannel(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x44) == 0) {
        return;
    }
    NNS_SndUnlockChannel();
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
}
