/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK OS_DisableIrq();
M2C_UNK OS_RestoreIrq();
s32 MicStopAutoSampling();
extern M2C_UNK micWork;

s32 MIC_StopAutoSamplingAsync(s32 arg0, s32 arg1) {
    M2C_UNK m2c_irq;
    m2c_irq = OS_DisableIrq();
    if (M2C_FIELD(&micWork, s32 *, 0) != 0) {
        OS_RestoreIrq(m2c_irq);
        return 1;
    }
    M2C_FIELD(&micWork, s32 *, 0) = 1;
    OS_RestoreIrq(m2c_irq);
    M2C_FIELD(&micWork, s32 *, 4) = arg0;
    M2C_FIELD(&micWork, s32 *, 8) = arg1;
    if (MicStopAutoSampling() != 0) {
        return 0;
    }
    return 3;
}
