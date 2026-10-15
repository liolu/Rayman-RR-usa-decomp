/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK PushCommand_impl(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);

void SND_StartTimer(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    PushCommand_impl(0xC, arg0, arg1, arg2, arg3);
}
