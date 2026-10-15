/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK PushCommand_impl(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32);

void SNDi_SetTrackParam(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    PushCommand_impl(7, arg0 | (arg4 << 0x18), arg1, arg2, arg3);
}
