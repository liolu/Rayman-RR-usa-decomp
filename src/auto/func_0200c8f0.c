/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK OS_DisableIrq();                            /* extern */
M2C_UNK OS_RestoreIrq();                            /* extern */
extern u32 data_020c0c48;

u32 func_0200c8f0(void) {
    M2C_UNK m2c_irq;
    M2C_UNK saved_reg_r4;
    u32 var_r4;

    var_r4  = saved_reg_r4;
    m2c_irq = OS_DisableIrq();
    if ((u32) data_020c0c48 < -1U) {
        var_r4 = data_020c0c48;
        data_020c0c48 += 1;
    }
    OS_RestoreIrq(m2c_irq);
    return var_r4;
}
