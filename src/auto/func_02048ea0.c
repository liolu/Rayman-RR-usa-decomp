#include "m2c.h"

extern M2C_UNK data_020d0c28;

void func_02048ea0(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(&data_020d0c28, s32 *, 0) = arg0;
    M2C_FIELD(&data_020d0c28, s32 *, 4) = arg1;
    M2C_FIELD(&data_020d0c28, s32 *, 8) = arg2;
}
