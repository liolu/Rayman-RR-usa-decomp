#include "m2c.h"

void *func_0205488c(s32);

void *func_020543d0(s16 arg0) {
    void *temp_r4;

    temp_r4                        = func_0205488c(8);
    M2C_FIELD(temp_r4, void **, 0) = func_0205488c(arg0 * 8);
    M2C_FIELD(temp_r4, s16 *, 4)   = arg0;
    M2C_FIELD(temp_r4, s16 *, 6)   = -1;
    return temp_r4;
}
