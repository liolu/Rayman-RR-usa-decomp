/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK OS_DisableIrq();
M2C_UNK OS_RestoreIrq();
extern u32 sFinishedTag;

s32 SND_IsFinishedCommandTag(u32 arg0) {
    M2C_UNK m2c_irq;
    s32 var_r4;

    m2c_irq = OS_DisableIrq();
    if (arg0 > (u32) sFinishedTag) {
        if ((u32) (arg0 - sFinishedTag) < 0x80000000U) {
            var_r4 = 0;
        } else {
            var_r4 = 1;
        }
    } else if ((u32) (sFinishedTag - arg0) < 0x80000000U) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    OS_RestoreIrq(m2c_irq);
    return var_r4;
}
