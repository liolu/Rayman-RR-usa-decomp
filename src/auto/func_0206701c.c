#include "m2c.h"

s32 func_0206701c(u32 arg0, void *arg1) {
    switch (arg0) {
        case 0:
            return M2C_FIELD(arg1, s32 *, 0x20);
        case 3:
            return M2C_FIELD(arg1, s32 *, 0x28);
        case 2:
            return M2C_FIELD(arg1, s32 *, 0x24);
        case 1:
            return M2C_FIELD(arg1, s32 *, 0x2C);
        default:
            return 0;
    }
}
