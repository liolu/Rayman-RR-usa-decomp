#include "m2c.h"

s32 *func_0201a588(M2C_UNK);                        /* extern */

void func_02058d4c(s32 **arg0) {
    s32 *temp_r0;

    if (*arg0 != NULL) {
        return;
    }
    temp_r0                    = func_0201a588(0xC);
    *arg0                      = temp_r0;
    *temp_r0                   = 0;
    M2C_FIELD(*arg0, s32 *, 4) = 0;
    M2C_FIELD(*arg0, s32 *, 8) = 0;
}
