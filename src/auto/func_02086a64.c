#include "m2c.h"

s32 func_02085c48(s32);

s32 func_02086a64(void *arg0, s32 arg1) {
    if ((arg0 != NULL) && (arg1 != 0)) {
        return func_02085c48(M2C_FIELD(arg0, s32 *, 0x18));
    }
    return -1;
}
