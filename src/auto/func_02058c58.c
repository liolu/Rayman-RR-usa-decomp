#include "m2c.h"

void func_02058c58(void *arg0, s32 arg1) {
    s32 temp_r1;

    if (arg0 == NULL) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x30);
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (temp_r1 & ~0x83);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (temp_r1 | 0x83);
}
