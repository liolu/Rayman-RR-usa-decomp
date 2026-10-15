#include "m2c.h"

M2C_UNK func_02021ce4(s32);

void func_020226f0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    func_02021ce4(M2C_FIELD(arg0, s32 *, 0));
}
