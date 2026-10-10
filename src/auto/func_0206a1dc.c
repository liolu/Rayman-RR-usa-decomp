#include "m2c.h"

extern void *data_020dd834;

s32 func_0206a1dc(void) {
    if (data_020dd834 != NULL) {
        return M2C_FIELD(data_020dd834, s32 *, 0x10);
    }
    return 0;
}
