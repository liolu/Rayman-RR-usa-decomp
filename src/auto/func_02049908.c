#include "m2c.h"

s32 func_0200de10(M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK data_020d0e50;

void func_02049908(void) {
    if (M2C_FIELD(&data_020d0e50, s32 *, 0x10) == 0) {
        M2C_FIELD(&data_020d0e50, s32 *, 0x10) = func_0200de10(0, -1, 0x10000);
    }
    if (M2C_FIELD(&data_020d0e50, s32 *, 0x1C) != 0) {
        return;
    }
    M2C_FIELD(&data_020d0e50, s32 *, 0x1C) = func_0200de10(0, -1, 0x4000);
}
