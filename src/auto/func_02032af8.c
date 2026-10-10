#include "m2c.h"

s32 func_0206b3f4();                                /* extern */

u8 func_02032af8(void) {
    u8 var_r0;

    if ((func_0206b3f4() & 0x80000000) == 0x80000000) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
