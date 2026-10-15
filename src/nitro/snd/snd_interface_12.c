/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK PushCommand_impl(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);

void SND_SetTrackMute(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    M2C_UNK var_r3;

    if (arg2 != 0) {
        var_r3 = 3;
    } else {
        var_r3 = 0;
    }
    PushCommand_impl(8, arg0, arg1, var_r3, 0);
}
