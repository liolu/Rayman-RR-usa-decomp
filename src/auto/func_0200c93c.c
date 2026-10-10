/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK OS_DisableIrq();                            /* extern */
M2C_UNK OS_RestoreIrq();                            /* extern */
extern M2C_UNK data_020c0c5c;

s32 func_0200c93c(s32 arg0) {
    M2C_UNK m2c_irq;
    s32 temp_r4;

    m2c_irq                               = OS_DisableIrq();
    temp_r4                               = M2C_FIELD(&data_020c0c5c, s32 *, 0xC);
    M2C_FIELD(&data_020c0c5c, s32 *, 0xC) = arg0;
    OS_RestoreIrq(m2c_irq);
    return temp_r4;
}
