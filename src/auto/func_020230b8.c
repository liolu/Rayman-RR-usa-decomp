#include "m2c.h"

extern M2C_UNK data_020bc23c;

void func_020230b8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(&data_020bc23c, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(&data_020bc23c, s32 *, 0xC);
}
