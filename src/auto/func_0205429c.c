#include "m2c.h"

s32 func_0205429c(void *arg0, s32 arg1, s16 arg2) {
    void **p;

    p = M2C_FIELD(arg0, void **, 0x10);
    return M2C_FIELD(M2C_FIELD(p[arg1], void **, 0) + (arg2 * 0xC), s16 *, 8);
}
