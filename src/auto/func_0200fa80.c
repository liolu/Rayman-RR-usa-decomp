/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK OS_DisableIrq();                            /* extern */
M2C_UNK OS_RestoreIrq();                            /* extern */
s32 func_0200f78c();                                /* extern */
extern M2C_UNK data_020c1000;

s32 func_0200fa80(s32 arg0, s32 arg1) {
    M2C_UNK m2c_irq;
    m2c_irq = OS_DisableIrq();
    if (M2C_FIELD(&data_020c1000, s32 *, 0) != 0) {
        OS_RestoreIrq(m2c_irq);
        return 1;
    }
    M2C_FIELD(&data_020c1000, s32 *, 0) = 1;
    OS_RestoreIrq(m2c_irq);
    M2C_FIELD(&data_020c1000, s32 *, 4) = arg0;
    M2C_FIELD(&data_020c1000, s32 *, 8) = arg1;
    if (func_0200f78c() != 0) {
        return 0;
    }
    return 3;
}
