#include "m2c.h"

s32 func_0206a7dc();

s32 func_0206a7ec(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 2) {
        return 0;
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x20) == 0) {
        return 0;
    }
    return func_0206a7dc();
}
