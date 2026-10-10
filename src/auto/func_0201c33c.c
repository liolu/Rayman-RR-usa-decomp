#include "m2c.h"

extern s32 data_020c49d8;

void func_0201c33c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x28) == -1) {
        return;
    }
    if (data_020c49d8 != 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (data_020c49d8 - 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (data_020c49d8 - 2);
}
