#include "m2c.h"

extern M2C_UNK data_020db9ec;
extern s32 data_020db9f4;

void func_0204c708(s32 arg0) {
    data_020db9f4                       = arg0;
    M2C_FIELD(&data_020db9ec, s32 *, 0) = (s32) (M2C_FIELD(&data_020db9ec, s32 *, 0) + arg0);
    M2C_FIELD(&data_020db9ec, s32 *, 4) = (s32) (M2C_FIELD(&data_020db9ec, s32 *, 4) + 1);
}
