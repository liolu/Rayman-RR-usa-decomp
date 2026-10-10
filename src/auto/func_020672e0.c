#include "m2c.h"

s32 func_0205703c();                         /* extern */
M2C_UNK func_0206721c();                            /* extern */
M2C_UNK func_02067918();                    /* extern */

s32 func_020672e0(void) {
    s32 temp_r4;

    func_0206721c();
    temp_r4 = func_0205703c();
    func_02067918(temp_r4, func_0205703c(0x1C));
    return temp_r4;
}
