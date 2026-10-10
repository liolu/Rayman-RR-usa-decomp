#include "m2c.h"

void func_02068278(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x10);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x14);
    *arg3 = M2C_FIELD(arg0, s32 *, 0x18);
}
