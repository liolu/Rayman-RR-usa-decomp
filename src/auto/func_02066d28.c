#include "m2c.h"

s32 func_02066d28(s32 arg0, s32 arg1) {
    if ((arg1 >= 0) && (arg1 < 2)) {
        return M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x5C);
    }
    return 0;
}
