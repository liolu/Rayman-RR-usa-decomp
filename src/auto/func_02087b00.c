#include "m2c.h"

s32 func_02061fcc(u16);

void func_02087b00(void *arg0, s32 *arg1) {
    *arg1 = func_02061fcc(M2C_FIELD(arg0, u16 *, 2));
}
