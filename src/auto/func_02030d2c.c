#include "m2c.h"

s32 func_0201bdd0(s32);                             /* extern */
M2C_UNK func_0203284c(s32);                         /* extern */
s32 func_0206b3f4();                                /* extern */

u8 func_02030d2c(void *arg0) {
    s32 temp_r4;
    u8 var_r0;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x24);
    if (func_0201bdd0(temp_r4) == 0) {
        return 0U;
    }
    func_0203284c(temp_r4);
    if ((func_0206b3f4() & 0x40) != 0x40) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
