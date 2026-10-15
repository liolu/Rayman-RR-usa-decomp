/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK SNDi_SetTrackParam(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);

void SND_SetTrackVolume(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    SNDi_SetTrackParam(arg0, arg1, 0xA, arg2, 2);
}
