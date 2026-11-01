#include "m2c.h"

void func_02054280(void *arg0, s32 arg1, s16 arg2, s16 arg3) {
    void **p;

    p                                                                  = M2C_FIELD(arg0, void **, 0x10);
    M2C_FIELD(M2C_FIELD(p[arg1], void **, 0) + (arg2 * 0xC), s16 *, 8) = arg3;
}
