#include "m2c.h"

void func_020328c0(s32 *, void *, s32, s32);        /* extern */

void func_0203f7a8(void *arg0, s32 arg1, s32 arg2) {
    s32 vec[3];

    func_020328c0(vec, arg0, arg1, arg2);
    M2C_FIELD(arg0, s32 *, 0xE0) = M2C_FIELD(arg0, s32 *, 0xE0) + vec[0];
    M2C_FIELD(arg0, s32 *, 0xE4) = M2C_FIELD(arg0, s32 *, 0xE4) + vec[1];
    M2C_FIELD(arg0, s32 *, 0xE8) = M2C_FIELD(arg0, s32 *, 0xE8) + vec[2];
}
