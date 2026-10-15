#include "m2c.h"

M2C_UNK func_02082a10(void *, M2C_UNK);
M2C_UNK func_02084f50();
M2C_UNK func_0209c724(M2C_UNK, M2C_UNK);

void func_02082ec8(void *arg0, M2C_UNK arg1) {
    if (arg0 == NULL) {
        return;
    }
    func_0209c724(0, 0);
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            func_02084f50();
        }
        if (M2C_FIELD(arg0, s32 *, 8) != 0) {
            func_02084f50();
        }
    }
    func_02082a10(arg0, arg1);
}
