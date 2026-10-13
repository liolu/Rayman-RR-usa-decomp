#include "m2c.h"

s32 func_02056e60(void *arg0, s16 arg1) {
    if (arg1 < (s32) M2C_FIELD(arg0, s16 *, 0x3C)) {
        return M2C_FIELD(arg0, s32 *, 0x20) + (arg1 * 0x18);
    }
    return 0;
}
