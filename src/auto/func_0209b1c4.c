#include "m2c.h"

s32 *func_0205d0cc();                               /* extern */
M2C_UNK func_0205d0d4();                            /* extern */

s32 func_0209b1c4(s32 arg0, s32 arg1, void *arg2) {
    s32 var_r0;

    func_0205d0d4();
    if (*func_0205d0cc() != 2) {
        var_r0 = 0;
    } else {
        func_0205d0d4();
        var_r0 = M2C_FIELD(func_0205d0cc(), s32 *, 4);
    }
    M2C_FIELD(arg2, s32 *, 0)   = var_r0;
    M2C_FIELD(arg2, s32 *, 0xC) = 0xB;
    return arg1;
}
