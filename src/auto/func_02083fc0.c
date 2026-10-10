#include "m2c.h"

void *func_02083fc0(s32 arg0, s32 *arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0)   = (s32) *arg1;
    M2C_FIELD(arg2, s32 *, 0xC) = 0x21;
    return ((s8 *) arg1 + 8);
}
