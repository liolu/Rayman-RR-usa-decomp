#include "m2c.h"

s32 func_0206922c(void **arg0) {
    void *temp_r0;

    if (arg0 != NULL) {
        temp_r0 = *arg0;
        if (temp_r0 != NULL) {
            return M2C_FIELD(temp_r0, s32 *, 8) - 1;
        }
    }
    return -1;
}
