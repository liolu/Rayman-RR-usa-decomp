#include "m2c.h"

s32 func_0205ea78(void *arg0, s32 arg1) {
    s32 *var_r2;
    s32 var_r3;
    s32 count;

    var_r2 = M2C_FIELD(arg0, s32 **, 0xC);
    count  = M2C_FIELD(arg0, s32 *, 0x10);
    var_r3 = 0;
    while (var_r2 != NULL && var_r3 < count) {
        if (*var_r2 == arg1) {
            return 1;
        }
        var_r2 += 1;
        var_r3 += 1;
    }
    return 0;
}
