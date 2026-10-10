#include "m2c.h"

s32 func_02048404(u16);                             /* extern */

void func_02087b7c(void *arg0, s32 *arg1) {
    *arg1 = func_02048404(M2C_FIELD(arg0, u16 *, 2));
}
