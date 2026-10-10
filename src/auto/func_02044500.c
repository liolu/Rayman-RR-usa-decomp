#include "m2c.h"

s32 func_020424bc(s32);                             /* extern */
extern void *data_020cfc78;

u8 func_02044500(s32 arg0) {
    u8 var_r0;
    void *temp_r0;

    temp_r0       = arg0 + 0x14;
    data_020cfc78 = temp_r0;
    if (func_020424bc(M2C_FIELD(temp_r0, s32 *, 0xC)) == 1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    data_020cfc78 += 0x14;
    return var_r0;
}
