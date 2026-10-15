/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_RescheduleThread();
M2C_UNK OSi_InsertLinkToQueue(s32, void *);
s32 OS_DisableIrq();
M2C_UNK OS_RestoreIrq(s32);
extern void **OSi_CurrentThreadPtr;

void OS_SleepThread(s32 arg0) {
    s32 temp_r5;
    void *temp_r4;

    temp_r5 = OS_DisableIrq();
    temp_r4 = *OSi_CurrentThreadPtr;
    if (arg0 != 0) {
        M2C_FIELD(temp_r4, s32 *, 0x78) = arg0;
        OSi_InsertLinkToQueue(arg0, temp_r4);
    }
    M2C_FIELD(temp_r4, s32 *, 0x64) = 0;
    OS_RescheduleThread();
    OS_RestoreIrq(temp_r5);
}
