#include "m2c.h"

void *func_0205488c(s32);                           /* extern */

void *func_02054194(s16 arg0) {
    void *temp_r0;

    temp_r0                        = func_0205488c(0x10);
    M2C_FIELD(temp_r0, s16 *, 0xC) = arg0;
    M2C_FIELD(temp_r0, void **, 4) = func_0205488c(arg0 * 2);
    M2C_FIELD(temp_r0, s16 *, 0xE) = -1;
    return temp_r0;
}
