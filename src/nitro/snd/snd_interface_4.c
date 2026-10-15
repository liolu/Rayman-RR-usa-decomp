/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK PushCommand_impl(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);

void SND_ResetMasterPan(void) {
    PushCommand_impl(0x18, -1, 0, 0, 0);
}
