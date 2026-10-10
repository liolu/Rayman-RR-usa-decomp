#include "m2c.h"

s32 func_0208696c(M2C_UNK **arg0, s32 arg1, s32 *arg2) {
    M2C_UNK *var_r3;
    s32 var_r0;

    var_r3 = *arg0;
    var_r0 = 0;
    if (arg1 > 0) {
        do {
            var_r0 += 1;
            var_r3 = *var_r3;
        } while (var_r0 < arg1);
    }
    *arg2 = M2C_FIELD(var_r3, s32 *, 0x10);
    return M2C_FIELD(var_r3, s32 *, 0xC);
}
