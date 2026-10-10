#include "m2c.h"

void func_02048d28(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x70);
    *arg2 = M2C_FIELD(arg0, s32 *, 0xE4);
}
