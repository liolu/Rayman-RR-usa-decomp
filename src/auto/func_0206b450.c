#include "m2c.h"

u8 func_0206b450(void *arg0) {
    s32 var_r0;
    void *temp_r0;

    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4);
    if (temp_r0 != NULL) {
        var_r0 = M2C_FIELD(temp_r0, u8 *, 0x27);
    } else {
        var_r0 = 0x50;
    }
    return var_r0;
}
