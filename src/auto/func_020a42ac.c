#include "m2c.h"

M2C_UNK func_02044d24();
M2C_UNK func_02044d78();
M2C_UNK func_02084ea0(M2C_UNK, M2C_UNK);

void *func_020a42ac(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, -8) == 0x108) {
        func_02044d24();
        func_02044d78();
        return arg1;
    }
    func_02084ea0(0x27, 0);
    return arg1;
}
