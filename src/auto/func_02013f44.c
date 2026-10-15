/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK OS_DisableIrq();
M2C_UNK OS_RestoreIrq();

void func_02013f44(void *arg0) {
    M2C_UNK m2c_irq;
    s32 var_r1;
    void *temp_r2;

    m2c_irq = OS_DisableIrq();
    if (M2C_FIELD(arg0, volatile s32 *, 0xC) & 1) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        M2C_FIELD(arg0, volatile s32 *, 0xC)     = (s32) (M2C_FIELD(arg0, volatile s32 *, 0xC) | 2);
        temp_r2                                  = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(temp_r2, volatile s32 *, 0x1C) = (s32) (M2C_FIELD(temp_r2, volatile s32 *, 0x1C) | 0x20);
    }
    OS_RestoreIrq(m2c_irq);
}
