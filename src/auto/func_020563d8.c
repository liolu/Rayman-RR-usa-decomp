#include "m2c.h"

s32 func_0205488c(s32);

void func_020563d8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 8) = func_0205488c(M2C_FIELD(arg0, s16 *, 0x36) * 4);
}
