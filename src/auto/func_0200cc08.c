/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200caf0();                            /* extern */
s32 OS_DisableIrq();                                /* extern */
M2C_UNK OS_RestoreIrq(s32);                         /* extern */

void func_0200cc08(void *arg0) {
    s32 temp_r4;

    temp_r4                      = OS_DisableIrq();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_0200caf0();
    OS_RestoreIrq(temp_r4);
}
