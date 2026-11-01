#include "m2c.h"

void func_02054110(void *arg0, s32 arg1, s32 *arg2) {
    void **p;

    p     = M2C_FIELD(arg0, void **, 0x10);
    *arg2 = M2C_FIELD(p[arg1], s32 *, 0);
}
