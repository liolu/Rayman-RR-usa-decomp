/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK OS_DisableIrq();
M2C_UNK OS_RestoreIrq();
extern s32 PMi_Work;

s32 PMi_Lock(void) {
    M2C_UNK m2c_irq;
    m2c_irq = OS_DisableIrq();
    if (PMi_Work != 0) {
        OS_RestoreIrq(m2c_irq);
        return 0;
    }
    PMi_Work = 1;
    OS_RestoreIrq(m2c_irq);
    return 1;
}
