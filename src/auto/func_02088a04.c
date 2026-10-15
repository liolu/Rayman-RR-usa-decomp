#include "m2c.h"

s32 func_0206b5e0(s32);

s32 func_02088a04(void *arg0) {
    s32 temp_r1;
    s32 var_r2;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0xC);
    var_r2  = 0;
    if (temp_r1 == 9) {
        var_r2 = M2C_FIELD(arg0, s32 *, 0);
    } else if (temp_r1 == 0x24) {
        var_r2 = func_0206b5e0(M2C_FIELD(arg0, s32 *, 0));
    }
    return var_r2;
}
