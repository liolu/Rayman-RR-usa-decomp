/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200e07c(M2C_UNK, M2C_UNK);            /* extern */
s32 OS_DisableIrq();                                /* extern */
M2C_UNK OS_RestoreIrq(s32);                         /* extern */
s32 func_02012518();                                /* extern */
extern s32 data_020c1968;

void func_02012208(s32 arg0) {
    M2C_UNK var_r1;
    s32 temp_r4;

    temp_r4       = OS_DisableIrq();
    data_020c1968 = arg0;
    if (func_02012518() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        func_0200e07c(0xF000, var_r1);
    }
    OS_RestoreIrq(temp_r4);
}
