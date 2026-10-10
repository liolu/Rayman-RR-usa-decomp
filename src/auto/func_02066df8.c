#include "m2c.h"

s32 func_02066e20();                                /* extern */

s32 func_02066df8(s32 arg0, void *arg1) {
    s32 var_r1;

    if (arg1 != NULL) {
        var_r1 = M2C_FIELD(M2C_FIELD(arg1, void **, 4), s32 *, 0x14);
    } else {
        var_r1 = 0;
    }
    if (var_r1 == 0) {
        return 0;
    }
    return func_02066e20(arg0);
}
