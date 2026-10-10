#include "m2c.h"

u8 func_0205736c(void *arg0) {
    u8 var_r0;

    if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4), u8 *, 0x25) & 0x40) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
