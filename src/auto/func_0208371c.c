#include "m2c.h"

s32 func_0206b3c4(s32);                             /* extern */

s32 func_0208371c(s32 *arg0, s32 arg1, void **arg2) {
    s32 var_r0;
    void *temp_r1;

    temp_r1 = *arg2;
    if (temp_r1 == NULL) {
        var_r0 = 0;
    } else {
        var_r0 = func_0206b3c4(M2C_FIELD(temp_r1, s32 *, 4));
    }
    *arg0 = var_r0;
    return 1;
}
