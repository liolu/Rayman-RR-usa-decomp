#include "m2c.h"

s32 func_02093304(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0)   = (s32) M2C_FIELD(*M2C_FIELD(arg0, void ***, 4), s32 *, 0xD4);
    M2C_FIELD(arg1, s32 *, 0xC) = 8;
    return 1;
}
