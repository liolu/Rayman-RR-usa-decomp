/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 OS_DisableIrq();
M2C_UNK OS_RestoreIrq(s32);
M2C_UNK SNDi_CallAlarmHandler(M2C_UNK);

void PxiFifoCallback(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = OS_DisableIrq();
    SNDi_CallAlarmHandler(arg1);
    OS_RestoreIrq(temp_r4);
}
