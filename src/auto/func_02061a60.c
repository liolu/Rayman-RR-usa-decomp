#include "m2c.h"

void *func_02066da0();

s32 func_02061a60(void) {
    void *temp_r0;

    temp_r0 = func_02066da0();
    if (temp_r0 != NULL) {
        return M2C_FIELD(temp_r0, s32 *, 4);
    }
    return 0;
}
