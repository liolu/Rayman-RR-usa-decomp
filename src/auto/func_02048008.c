#include "m2c.h"

M2C_UNK func_0202c1a0(M2C_UNK);
M2C_UNK func_0202c334();
extern M2C_UNK data_020d02ec;

void func_02048008(void) {
    if (M2C_FIELD(&data_020d02ec, s32 *, 0) == 4) {
        return;
    }
    M2C_FIELD(&data_020d02ec, s32 *, 4) = 0;
    func_0202c1a0(1);
    func_0202c334();
}
