#include "m2c.h"

s32 func_02082534(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x10);
    if ((temp_r0 != NULL) && (M2C_FIELD(temp_r0, u8 *, 0x4C) == 0)) {
        return 0;
    }
    return 1;
}
