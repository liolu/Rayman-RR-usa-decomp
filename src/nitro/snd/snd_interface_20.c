/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK PushCommand_impl(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);

void SND_StopSeq(M2C_UNK arg0) {
    PushCommand_impl(1, arg0, 0, 0, 0);
}
