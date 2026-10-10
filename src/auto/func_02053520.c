#include "m2c.h"

extern M2C_UNK data_020dbf4c;

void func_02053520(void) {
    M2C_FIELD(&data_020dbf4c, s32 *, 0x18) = (s32) (M2C_FIELD(&data_020dbf4c, s32 *, 0x18) + 1);
}
