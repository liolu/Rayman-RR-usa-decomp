/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK OS_DisableIrq();                            /* extern */
M2C_UNK OS_RestoreIrq();                            /* extern */
extern s32 data_020c0c48;

s32 func_0200c8b8(void) {
    M2C_UNK m2c_irq;
    s32 var_r4;

    m2c_irq = OS_DisableIrq();
    var_r4  = 0;
    if (data_020c0c48 != 0) {
        var_r4 = data_020c0c48;
        data_020c0c48 -= 1;
    }
    OS_RestoreIrq(m2c_irq);
    return var_r4;
}
