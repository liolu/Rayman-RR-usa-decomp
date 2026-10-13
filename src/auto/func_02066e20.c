#include "m2c.h"

s32 func_02066e20(u32 arg0, void *arg1) {
    switch (arg0) {
        case 0:
            return M2C_FIELD(arg1, s32 *, 0x10);
        case 2:
            return M2C_FIELD(arg1, s32 *, 0x14);
        case 1:
            return M2C_FIELD(arg1, s32 *, 0x18);
        case 3:
            return M2C_FIELD(arg1, s32 *, 0x1C);
        default:
            return 0;
    }
}
