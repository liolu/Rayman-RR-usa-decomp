#include "m2c.h"

u8 func_0205e6d4(void *arg0) {
    u8 var_r0;

    if (M2C_FIELD(arg0, u16 *, 6) & 2) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
