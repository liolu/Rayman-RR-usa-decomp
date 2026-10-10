#include "m2c.h"

void func_0206b3d4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, void **, 8) = arg1;
    if (arg1 == NULL) {
        return;
    }
    M2C_FIELD(*M2C_FIELD(arg1, void ***, 4), s32 *, 0x7C) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
}
