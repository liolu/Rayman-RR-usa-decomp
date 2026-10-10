#include "m2c.h"

void *func_0205488c(M2C_UNK);                       /* extern */

void func_020545d4(void **arg0) {
    void *temp_r0;

    temp_r0                         = func_0205488c(0x18);
    M2C_FIELD(temp_r0, s32 *, 0)    = 0;
    M2C_FIELD(temp_r0, s32 *, 4)    = 0;
    M2C_FIELD(temp_r0, s32 *, 8)    = 0;
    M2C_FIELD(temp_r0, s32 *, 0xC)  = 0;
    M2C_FIELD(temp_r0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x14) = 0;
    *arg0                           = temp_r0;
}
