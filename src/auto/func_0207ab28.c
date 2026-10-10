#include "m2c.h"

s32 func_0207ab28(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, M2C_UNK(**)(M2C_UNK, s32), 8)(arg1, temp_r4);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg2);
    return temp_r4;
}
