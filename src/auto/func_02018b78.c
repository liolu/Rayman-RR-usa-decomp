/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK OS_DisableIrq();                            /* extern */
M2C_UNK OS_RestoreIrq();                            /* extern */
s32 func_0200d3c0();                                /* extern */

s32 func_02018b78(void) {
    M2C_UNK m2c_irq;
    s32 temp_r4;

    if (func_0200d3c0() == 0) {
        return 1;
    }
    m2c_irq             = OS_DisableIrq();
    *(s32 *) 0x04FFF200 = 0x10;
    temp_r4             = *(s32 *) 0x04FFF200;
    OS_RestoreIrq(m2c_irq);
    if (temp_r4 != 0) {
        return 1;
    }
    return 0;
}
