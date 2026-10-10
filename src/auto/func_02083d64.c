#include "m2c.h"

s32 func_02083ad8(s32, M2C_UNK);                    /* extern */
M2C_UNK func_02084ea0(M2C_UNK, M2C_UNK);            /* extern */

void *func_02083d64(M2C_UNK arg0, s32 *arg1) {
    if (func_02083ad8(*arg1, arg0) == 0) {
        func_02084ea0(0xA, 0);
    }
    return ((s8 *) arg1 + 8);
}
