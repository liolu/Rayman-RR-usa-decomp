#include "m2c.h"

void *func_0201a588(M2C_UNK);

void func_02085d64(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = func_0201a588(0x20);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 0)    = 0;
    M2C_FIELD(temp_r0, s32 *, 4)    = 0;
    M2C_FIELD(temp_r0, s32 *, 8)    = 0;
    M2C_FIELD(temp_r0, s32 *, 0xC)  = arg0;
    M2C_FIELD(temp_r0, s32 *, 0x14) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x10) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x1C) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x18) = arg1;
}
