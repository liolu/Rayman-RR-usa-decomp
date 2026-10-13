#include "m2c.h"

s32 func_0208345c(void **arg0, s32 arg1, void *arg2) {
    s32 var_r0;
    void *temp_r1;

    temp_r1 = *arg0;
    if (temp_r1 == NULL) {
        var_r0 = 0;
    } else {
        var_r0 = (M2C_FIELD(temp_r1, s32 *, 0) != 2) ? 0 : M2C_FIELD(temp_r1, s32 *, 4);
    }
    M2C_FIELD(arg2, s32 *, 0)   = var_r0;
    M2C_FIELD(arg2, s32 *, 0xC) = 0xB;
    if (temp_r1 == NULL) {
        return 0;
    }
    return 1;
}
