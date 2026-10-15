#include "m2c.h"

M2C_UNK abort();
M2C_UNK func_02003804(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32);
extern M2C_UNK data_020bbc24;

void func_02000f58(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_02003804(&data_020bbc24, arg0, arg1, arg2, arg3);
    abort();
}
