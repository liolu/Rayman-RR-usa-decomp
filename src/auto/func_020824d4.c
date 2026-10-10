#include "m2c.h"

s32 func_020824d4(void *arg0, s32 arg1) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x10);
    if ((temp_r2 != NULL) && (M2C_FIELD(temp_r2, u8 *, 0x4C) == 1) && (M2C_FIELD(temp_r2, u8 *, 0x4D) == arg1)) {
        return 0;
    }
    return 1;
}
