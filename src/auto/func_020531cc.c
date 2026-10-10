#include "m2c.h"

extern M2C_UNK data_020dbb00;

void func_020531cc(s32 arg0) {
    M2C_FIELD(&data_020dbb00, s32 *, 0xC) = arg0;
}
