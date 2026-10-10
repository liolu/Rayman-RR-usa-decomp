#include "m2c.h"

s32 func_02082500(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x10);
    if ((temp_r3 != NULL) && (M2C_FIELD(temp_r3, u8 *, 0x4C) == 1) && (M2C_FIELD(temp_r3, u8 *, 0x4D) == arg1) &&
        (M2C_FIELD(temp_r3, s32 *, 0x48) == arg2)) {
        return 0;
    }
    return 1;
}
