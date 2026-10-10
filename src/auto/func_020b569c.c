#include "m2c.h"

s32 func_020b569c(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 8) >= (s32) M2C_FIELD(arg0, s32 *, 0xC)) {
        return 1;
    }
    return 0;
}
