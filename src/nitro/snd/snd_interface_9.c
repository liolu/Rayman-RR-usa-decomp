/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK PushCommand_impl(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);

void SND_SetChannelVolume(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    PushCommand_impl(0x14, arg0, arg1, arg2, 0);
}
