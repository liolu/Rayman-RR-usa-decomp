#include "m2c.h"

s32 func_02067060(u32 arg0, void *arg1) {
    switch (arg0) {
        case 0:
            return M2C_FIELD(arg1, s32 *, 0x30);
        case 3:
            return M2C_FIELD(arg1, s32 *, 0x3C);
        case 2:
            return M2C_FIELD(arg1, s32 *, 0x34);
        case 1:
            return M2C_FIELD(arg1, s32 *, 0x38);
        default:
            return 0;
    }
}
