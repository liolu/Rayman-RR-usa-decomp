#include "m2c.h"

M2C_UNK func_02049f9c(s32, M2C_UNK);
s32 func_0205488c(M2C_UNK);

void func_02049ff4(s32 *arg0, M2C_UNK arg1) {
    *arg0 = func_0205488c(0x84);
    if (arg0 == NULL) {
        return;
    }
    func_02049f9c(*arg0, arg1);
}
