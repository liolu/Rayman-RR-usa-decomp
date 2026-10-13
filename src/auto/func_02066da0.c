#include "m2c.h"

s32 func_02066da0(u32 arg0, void *arg1) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(arg1, void **, 4), void **, 0x14);
    if (temp_r1 == NULL) {
        return 0;
    }
    switch (arg0) {
        case 0:
            return M2C_FIELD(temp_r1, s32 *, 0);
        case 2:
            return M2C_FIELD(temp_r1, s32 *, 4);
        case 1:
            return M2C_FIELD(temp_r1, s32 *, 8);
        case 3:
            return M2C_FIELD(temp_r1, s32 *, 0xC);
        default:
            return 0;
    }
}
