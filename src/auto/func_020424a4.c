#include "m2c.h"

u8 func_020424a4(void *arg0) {
    u8 var_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) > 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
