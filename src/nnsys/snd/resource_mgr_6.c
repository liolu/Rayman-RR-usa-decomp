/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK SND_LockChannel(s32, M2C_UNK);
extern s32 sChannelLock;

s32 NNS_SndLockChannel(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & sChannelLock) {
        return 0;
    }
    SND_LockChannel(arg0, 0);
    sChannelLock |= arg0;
    return 1;
}
