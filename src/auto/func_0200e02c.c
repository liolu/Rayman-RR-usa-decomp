#include "m2c.h"

void *func_0200e02c(void **arg0, void *arg1) {
    M2C_FIELD(arg1, void ***, 4) = arg0;
    M2C_FIELD(arg1, s32 *, 0)    = 0;
    if (arg0 != NULL) {
        *arg0 = arg1;
    }
    return arg1;
}
