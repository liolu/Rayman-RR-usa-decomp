#include "m2c.h"

s32 func_0201b0e4();                                /* extern */
s32 *func_0205703c();                               /* extern */
M2C_UNK func_020694b4();                            /* extern */

s32 *func_020695c0(void) {
    s32 *temp_r4;

    func_020694b4();
    temp_r4  = func_0205703c();
    *temp_r4 = func_0201b0e4();
    return temp_r4;
}
