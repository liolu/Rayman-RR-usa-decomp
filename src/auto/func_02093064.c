#include "m2c.h"

s32 func_02074778(s32);
s32 func_020747a8(s32);
void *func_02084450(M2C_UNK, void *, M2C_UNK *);
s32 func_02088a04(M2C_UNK *);

void *func_02093064(M2C_UNK arg0, void *arg1, s32 *arg2) {
    s32 sp0[4];
    s32 var_r0;

    if (M2C_FIELD(arg1, s32 *, -8) == 0x55) {
        arg1   = func_02084450(arg0, arg1, sp0);
        var_r0 = func_020747a8(func_02088a04(sp0));
        *arg2  = (var_r0 != 0) ? func_02074778(var_r0) : 0;
        return arg1;
    }
    *arg2 = 0;
    return arg1;
}
