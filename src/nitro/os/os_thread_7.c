/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_RescheduleThread();
s32 OS_DisableIrq();
M2C_UNK OS_RestoreIrq(s32);

void OS_WakeupThreadDirect(void *arg0) {
    s32 temp_r4;

    temp_r4                      = OS_DisableIrq();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    OS_RescheduleThread();
    OS_RestoreIrq(temp_r4);
}
