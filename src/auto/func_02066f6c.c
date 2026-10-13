#include "m2c.h"

u8 func_02066f6c(void *arg0) {
    u32 var_r0;
    void *var_r0_2;

    if (arg0 != NULL) {
        var_r0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x14);
    } else {
        var_r0_2 = NULL;
    }
    if (var_r0_2 != NULL) {
        var_r0 = M2C_FIELD(var_r0_2, u8 *, 0x42) & 0x10;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
