/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK OS_DisableIrq();                            /* extern */
M2C_UNK OS_RestoreIrq();                            /* extern */
extern s32 data_020c20f8;
extern s32 data_020c20fc;
extern s32 data_020c2114;

s32 func_02018ddc(void) {
    M2C_UNK m2c_irq;
    s32 var_r4;

    m2c_irq = OS_DisableIrq();
    if (data_020c20fc == 0) {
        var_r4 = data_020c20f8;
    } else {
        var_r4 = data_020c2114;
    }
    OS_RestoreIrq(m2c_irq);
    return var_r4;
}
