/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MicWaitBusy();
s32 MIC_StopAutoSamplingAsync(M2C_UNK *, M2C_UNK);
extern M2C_UNK micWork;
extern M2C_UNK MicGetResultCallback;

s32 MIC_StopAutoSampling(void) {
    s32 temp_r0;

    temp_r0                         = MIC_StopAutoSamplingAsync(&MicGetResultCallback, 0);
    M2C_FIELD(&micWork, s32 *, 0xC) = temp_r0;
    if (temp_r0 == 0) {
        MicWaitBusy();
    }
    return M2C_FIELD(&micWork, s32 *, 0xC);
}
