#include "m2c.h"

s32 func_020413b4(M2C_UNK, u16);
s32 func_0208866c(u16);

void func_020877c8(void *arg0, s32 *arg1) {
    s32 temp_r0;

    temp_r0 = func_020413b4(0xD, M2C_FIELD(arg0, u16 *, 2));
    if (temp_r0 != 0) {
        *arg1 = temp_r0;
        return;
    }
    *arg1 = func_0208866c(M2C_FIELD(arg0, u16 *, 2));
}
