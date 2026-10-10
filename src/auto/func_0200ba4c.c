#include "m2c.h"

void func_0200ba4c(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        M2C_FIELD((void *) 0x04000060, u16 *, 0)     = (u16) ((M2C_FIELD((void *) 0x04000060, u16 *, 0) & ~0x3000) | 4);
        M2C_FIELD((void *) 0x04000060, s16 *, 0x2E0) = arg1;
        return;
    }
    M2C_FIELD((void *) 0x04000060, u16 *, 0) = (u16) (M2C_FIELD((void *) 0x04000060, u16 *, 0) & 0xCFFB);
}
