/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK SND_SetPlayerVolume(u8, s32);
M2C_UNK SND_StopSeq(u8);
M2C_UNK ShutdownPlayer(void *);

void ForceStopSeq(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        SND_SetPlayerVolume(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    SND_StopSeq(M2C_FIELD(arg0, u8 *, 0x3C));
    ShutdownPlayer(arg0);
}
