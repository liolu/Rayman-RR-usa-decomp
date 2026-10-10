#include "m2c.h"

M2C_UNK func_02021d10(s32);                         /* extern */

void func_0202270c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    func_02021d10(M2C_FIELD(arg0, s32 *, 0));
}
