/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK OS_DisableIrq();
M2C_UNK OS_RestoreIrq();
extern s32 sFinishedTag;
extern s32 sReserveList;
extern s32 sCurrentTag;

s32 SND_GetCurrentCommandTag(void) {
    M2C_UNK m2c_irq;
    s32 var_r4;

    m2c_irq = OS_DisableIrq();
    if (sReserveList == 0) {
        var_r4 = sFinishedTag;
    } else {
        var_r4 = sCurrentTag;
    }
    OS_RestoreIrq(m2c_irq);
    return var_r4;
}
