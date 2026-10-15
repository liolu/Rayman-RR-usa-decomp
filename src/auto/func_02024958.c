#include "m2c.h"

M2C_UNK func_02024ea0(s32);
M2C_UNK func_02027870(s32);

void func_02024958(void *arg0) {
    s32 temp = M2C_FIELD(arg0, s32 *, 0x4);

    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_02027870(temp);
        return;
    }
    func_02024ea0(temp);
}
