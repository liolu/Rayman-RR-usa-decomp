/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02018ddc();                                /* extern */
M2C_UNK func_02018e1c(s32);                         /* extern */
M2C_UNK func_02018eac(M2C_UNK);                     /* extern */

void func_020b3934(void) {
    s32 temp_r4;

    temp_r4 = func_02018ddc();
    func_02018eac(1);
    func_02018e1c(temp_r4);
}
