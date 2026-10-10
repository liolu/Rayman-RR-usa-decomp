#include "m2c.h"

extern M2C_UNK data_020dc19c;

u8 func_0205845c(void) {
    u8 var_r0;

    if (M2C_FIELD(&data_020dc19c, s8 *, 0x22) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
