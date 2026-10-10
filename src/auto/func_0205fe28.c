#include "m2c.h"

u8 func_0205fe28(void *arg0) {
    u8 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0) != 2) {
        return 0U;
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x10) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
