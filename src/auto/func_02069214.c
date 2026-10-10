#include "m2c.h"

s32 func_02069214(void *arg0) {
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0) != 0)) {
        return M2C_FIELD(arg0, s32 *, 4);
    }
    return -1;
}
