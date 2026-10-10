#include "m2c.h"

s32 func_02085cdc(s32);                             /* extern */

s32 func_02086a84(void *arg0, s32 arg1) {
    if ((arg0 != NULL) && (arg1 != 0)) {
        return func_02085cdc(M2C_FIELD(arg0, s32 *, 0x18));
    }
    return -1;
}
