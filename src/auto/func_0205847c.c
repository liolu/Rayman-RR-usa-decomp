#include "m2c.h"

s32 func_02003cfc(void *);
extern u8 data_020bbfa0;
extern u8 data_020de0d4;

s32 func_0205847c(s32 arg0) {
    s32 temp_r5;
    s32 var_r4;

    var_r4 = 1;
    if (data_020bbfa0 != 0) {
        return 0;
    }
    temp_r5 = (arg0 - 1) * 0xA;
    if ((func_02003cfc(&data_020de0d4 + temp_r5) != 0) && (((s8 *) &data_020de0d4)[temp_r5] != 0x20)) {

    } else {
        var_r4 = 0;
    }
    return var_r4;
}
