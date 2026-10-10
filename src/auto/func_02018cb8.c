/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 OS_DisableIrq();                                /* extern */
M2C_UNK OS_RestoreIrq(s32);                         /* extern */
M2C_UNK func_0201939c(M2C_UNK);                     /* extern */

void func_02018cb8(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = OS_DisableIrq();
    func_0201939c(arg1);
    OS_RestoreIrq(temp_r4);
}
