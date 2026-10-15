/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK SND_UnlockChannel(s32, M2C_UNK);
extern s32 sChannelLock;

void NNS_SndUnlockChannel(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    SND_UnlockChannel(arg0, 0);
    sChannelLock &= ~arg0;
}
