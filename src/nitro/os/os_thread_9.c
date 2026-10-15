/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_EnableScheduler();
M2C_UNK OS_DisableScheduler();
M2C_UNK OS_RescheduleThread();
M2C_UNK OS_WakeupThread(void *);
M2C_UNK OSi_RemoveThreadFromList(void *);
M2C_UNK func_0200d194(s32, void *);
M2C_UNK OSi_UnlockAllMutex(void *);
M2C_UNK func_0200eb98();
extern void **OSi_CurrentThreadPtr;

void OSi_ExitThread_Destroy(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *OSi_CurrentThreadPtr;
    OS_DisableScheduler();
    OSi_UnlockAllMutex(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_0200d194(temp_r0, temp_r4);
    }
    OSi_RemoveThreadFromList(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    OS_WakeupThread(temp_r4 + 0x9C);
    OS_EnableScheduler();
    OS_RescheduleThread();
    func_0200eb98();
}
