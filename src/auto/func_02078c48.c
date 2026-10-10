#include "m2c.h"

s32 func_02078c48(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x34) + (arg1 * 8);
    if ((arg2 < (s32) M2C_FIELD(temp_r1, u8 *, 1)) || (arg2 > (s32) M2C_FIELD(temp_r1, u8 *, 2))) {
        return 1;
    }
    return 0;
}
