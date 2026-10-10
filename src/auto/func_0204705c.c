#include "m2c.h"

extern M2C_UNK data_020bc900;
extern s32 data_020d00d8;

s16 func_0204705c(void) {
    s16 var_r0;

    if (data_020d00d8 == 0) {
        return 0;
    }
    if (M2C_FIELD(&data_020bc900, s8 *, 4) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
