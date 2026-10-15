#include "m2c.h"

M2C_UNK func_02024ee0();
M2C_UNK func_02027a34();

void func_020249c0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        func_02027a34(arg0);
        return;
    }
    func_02024ee0(arg0);
}
