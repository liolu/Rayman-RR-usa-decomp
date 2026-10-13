#include "m2c.h"

u8 func_02066fa0(void *arg0) {
    u8 var_r0;

    if (arg0 != NULL) {
        var_r0 = M2C_FIELD(arg0, u8 *, 0x40);
    } else {
        var_r0 = 1;
    }
    return (u8) (var_r0 & 0xFF);
}
