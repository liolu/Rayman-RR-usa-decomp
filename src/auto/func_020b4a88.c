/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 OS_DisableIrq();                                /* extern */
M2C_UNK OS_RestoreIrq(s32);                         /* extern */
M2C_UNK func_020b57f0(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020e9cac;

void func_020b4a88(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = OS_DisableIrq();
    func_020b57f0(&data_020e9cac, arg0);
    OS_RestoreIrq(temp_r4);
}
