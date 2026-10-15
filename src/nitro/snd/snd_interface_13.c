/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK PushCommand_impl(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);
s32 SNDi_SetAlarmHandler(M2C_UNK, M2C_UNK, s32);

void SND_SetupAlarm(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    PushCommand_impl(0x12, arg0, arg1, arg2, SNDi_SetAlarmHandler(arg0, arg3, arg4));
}
