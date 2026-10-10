#include "m2c.h"

s32 func_020680d8(s32);                             /* extern */
s32 func_020680f0(s32);                             /* extern */

s32 func_02068a8c(void *arg0) {
    s32 temp_r1;
    s32 temp_r4;
    void *var_r0;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r1 == 2) {
        if (temp_r1 != 2) {
            var_r0 = NULL;
        } else {
            var_r0 = M2C_FIELD(arg0, void **, 4);
        }
        temp_r4 = M2C_FIELD(var_r0, s32 *, 0x1C);
        if ((temp_r4 != 0) && (func_020680f0(temp_r4) != 0)) {
            return func_020680d8(temp_r4);
        }
        return 0;
    }
    return 0;
}
