#include "m2c.h"

s32 func_02045310(u16);

void func_02087a74(void *arg0, s32 *arg1) {
    *arg1 = func_02045310(M2C_FIELD(arg0, u16 *, 2));
}
