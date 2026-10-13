#include "m2c.h"

u8 func_0204820c(void *arg0, s32 arg1) {
    s32 var_r3;

    var_r3 = 1;
    if ((u16) ((u16) (1 << arg1) & M2C_FIELD(arg0, u16 *, 2)) == 0) {
        var_r3 = 0;
    }
    return var_r3;
}
