#include "m2c.h"

M2C_UNK func_0200eb98();                            /* extern */
M2C_UNK func_02013e74(M2C_UNK);                     /* extern */
s32 func_020140a8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020143a0(M2C_UNK);                     /* extern */

s32 func_02077f2c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_02013e74(arg1);
    func_020143a0(arg0);
    if (func_020140a8(arg0, arg2) == 0) {
        if (arg3 != 0) {
            func_0200eb98();
        } else {
            return 0;
        }
    }
    return 1;
}
