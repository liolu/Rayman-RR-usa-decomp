#include "m2c.h"

void func_02048d04(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x70) = arg1;
    M2C_FIELD(arg0, s32 *, 0xE4) = arg2;
    M2C_FIELD(arg0, s32 *, 0x74) = (s32) (((s64) arg1 * arg2 + 0x800) >> 0xC);
}
