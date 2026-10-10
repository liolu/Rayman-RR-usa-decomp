#include "m2c.h"

s32 func_0208eb04(void *arg0, void *arg1) {
    s32 temp_r0;
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_r0 = M2C_FIELD(arg1, s32 *, 0xC);
    if (temp_r0 > temp_r2) {
        return -1;
    }
    if (temp_r0 != temp_r2) {
        return 1;
    }
    return 0;
}
