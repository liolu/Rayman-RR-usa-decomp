#include "m2c.h"

s32 func_020932ec(void *arg0, s32 *arg1) {
    M2C_FIELD(*M2C_FIELD(arg0, void ***, 4), s32 *, 0xD0) = (s32) *arg1;
    return 1;
}
