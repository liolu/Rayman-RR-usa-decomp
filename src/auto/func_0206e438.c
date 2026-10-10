#include "m2c.h"

s32 func_0206e438(void *arg0) {
    void *temp_r2;

    temp_r2 = *M2C_FIELD(arg0, void ***, 4);
    if ((M2C_FIELD(temp_r2, u8 *, 0x9A) != 0) && (M2C_FIELD(temp_r2, s32 *, 4) == M2C_FIELD(temp_r2, s32 *, 0x94))) {
        return 1;
    }
    return 0;
}
