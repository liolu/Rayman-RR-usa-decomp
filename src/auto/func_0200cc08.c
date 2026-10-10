/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200caf0();                            /* extern */
s32 func_0200e908();                                /* extern */
M2C_UNK func_0200e91c(s32);                         /* extern */

void func_0200cc08(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_0200e908();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_0200caf0();
    func_0200e91c(temp_r4);
}
