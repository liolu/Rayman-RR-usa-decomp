#include "m2c.h"

s32 func_0202e814(u32 arg0, void *arg1) {
    switch (arg0) {
        case 0:
            return M2C_FIELD(arg1, s32 *, 4);
        case 1:
            return M2C_FIELD(arg1, s32 *, 0);
        case 3:
            return M2C_FIELD(arg1, s32 *, 0xC);
        case 2:
            return M2C_FIELD(arg1, s32 *, 8);
        default:
            return 0;
    }
}
