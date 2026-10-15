/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_WakeupThread();
void *OSi_RemoveMutexLinkFromQueue(void *);

void OSi_UnlockAllMutex(void *arg0) {
    void *temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x88) == 0) {
        return;
    }
    do {
        temp_r0                        = OSi_RemoveMutexLinkFromQueue(arg0 + 0x88);
        M2C_FIELD(temp_r0, s32 *, 0xC) = 0;
        M2C_FIELD(temp_r0, s32 *, 8)   = 0;
        OS_WakeupThread();
    } while (M2C_FIELD(arg0, s32 *, 0x88) != 0);
}
