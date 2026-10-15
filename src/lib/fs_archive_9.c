#include "m2c.h"

s32 func_0206701c();

s32 func_02060548(s32 arg0, void *arg1) {
    if (M2C_FIELD(M2C_FIELD(arg1, void **, 4), s32 *, 0x14) == 0) {
        return 0;
    }
    return func_0206701c(arg0);
}
