/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 OS_GetProcMode();
M2C_UNK func_02018300();
extern s32 PMi_Work;

void PMi_WaitBusy(void) {
    if (PMi_Work == 0) {
        return;
    }
    do {
        if (OS_GetProcMode() == 0x12) {
            func_02018300();
        }
    } while (PMi_Work != 0);
}
