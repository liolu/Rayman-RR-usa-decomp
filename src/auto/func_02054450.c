#include "m2c.h"

s32 func_02054450(void *arg0, s32 arg1, s32 arg2) {
    void **p;

    p = M2C_FIELD(arg0, void **, 0x10);
    return M2C_FIELD(M2C_FIELD(p[arg1], void **, 0) + (arg2 * 8), s32 *, 4);
}
