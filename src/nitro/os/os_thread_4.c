/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK OS_DisableIrq();
M2C_UNK OS_RestoreIrq();
extern M2C_UNK OSi_ThreadInfo;

s32 OS_SetSwitchThreadCallback(s32 arg0) {
    M2C_UNK m2c_irq;
    s32 temp_r4;

    m2c_irq                               = OS_DisableIrq();
    temp_r4                               = M2C_FIELD(&OSi_ThreadInfo, s32 *, 0xC);
    M2C_FIELD(&OSi_ThreadInfo, s32 *, 0xC) = arg0;
    OS_RestoreIrq(m2c_irq);
    return temp_r4;
}
