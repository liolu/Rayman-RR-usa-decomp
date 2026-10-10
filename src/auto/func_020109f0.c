/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK OS_DisableIrq();                            /* extern */
M2C_UNK OS_RestoreIrq();                            /* extern */
extern s32 data_020c1034;

s32 func_020109f0(void) {
    M2C_UNK m2c_irq;
    m2c_irq = OS_DisableIrq();
    if (data_020c1034 != 0) {
        OS_RestoreIrq(m2c_irq);
        return 0;
    }
    data_020c1034 = 1;
    OS_RestoreIrq(m2c_irq);
    return 1;
}
