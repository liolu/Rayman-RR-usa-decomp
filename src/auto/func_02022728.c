#include "m2c.h"

s32 func_02022294(s32);

s32 func_02022728(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return -1;
    }
    return func_02022294(M2C_FIELD(arg0, s32 *, 0));
}
