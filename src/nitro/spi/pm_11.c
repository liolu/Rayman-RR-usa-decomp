/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 PM_ForceToPowerOffAsync(M2C_UNK *, s32 *);
M2C_UNK PMi_WaitBusy();
extern M2C_UNK PMi_DummyCallback;

s32 PM_ForceToPowerOff(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = PM_ForceToPowerOffAsync(&PMi_DummyCallback, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    PMi_WaitBusy();
    return sp0;
}
