#include "m2c.h"

M2C_UNK func_02021d10(s32);

void func_02023834(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
        return;
    }
    func_02021d10(M2C_FIELD(arg0, s32 *, 0));
}
