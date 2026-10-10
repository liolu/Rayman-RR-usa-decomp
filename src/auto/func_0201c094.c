#include "m2c.h"

void func_0201c094(void *arg0, s32 arg1) {
    s32 temp_r1;
    s32 var_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x30);
    if (arg1 != 0) {
        var_r1 = temp_r1 | 0x20000;
    } else {
        var_r1 = temp_r1 & ~0x20000;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = var_r1;
}
