#include "m2c.h"

extern M2C_UNK data_020bc704;
extern void *data_020cfc78;

u8 func_02042db8(s32 arg0) {
    s32 (*temp_r1)(s32);
    s32 var_r3;
    u8 var_r0;

    arg0          = arg0 + 0x14;
    data_020cfc78 = (void *) arg0;
    var_r3        = 0;
    temp_r1       = *((M2C_UNK *) ((s8 *) &data_020bc704 + ((u8) M2C_FIELD((void *) arg0, s16 *, 0xC) * 4)));
    if (temp_r1 != NULL) {
        var_r3 = temp_r1(arg0);
    }
    if (var_r3 != 1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
