#include "m2c.h"

u8 func_02048234(void *arg0, s32 arg1) {
    u8 var_r0;

    if (arg1 == (u16) (M2C_FIELD(arg0, u16 *, 2) & arg1)) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
