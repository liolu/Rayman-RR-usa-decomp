#include "m2c.h"

s32 func_0204820c();

s32 func_020482e0(void *arg0, s32 arg1) {
    s32 v = M2C_FIELD(arg0, s32 *, 0xC);

    if (v == -1) {
        return 0;
    }
    return func_0204820c(v, arg1);
}
