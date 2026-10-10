/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018954(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_02018ddc();                                /* extern */
M2C_UNK func_02018e1c(s32);                         /* extern */
M2C_UNK func_02018eac(M2C_UNK);                     /* extern */
M2C_UNK func_020b3200();                            /* extern */

void func_020b248c(void) {
    s32 temp_r4;

    func_020b3200();
    func_02018954(0, 0, 0, 0);
    temp_r4 = func_02018ddc();
    func_02018eac(1);
    func_02018e1c(temp_r4);
}
