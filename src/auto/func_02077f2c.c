#include "m2c.h"

M2C_UNK func_0200eb98();
M2C_UNK func_02013e74(M2C_UNK);
s32 FS_OpenFile(M2C_UNK, M2C_UNK);
M2C_UNK FS_InitFile(M2C_UNK);

s32 func_02077f2c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_02013e74(arg1);
    FS_InitFile(arg0);
    if (FS_OpenFile(arg0, arg2) == 0) {
        if (arg3 != 0) {
            func_0200eb98();
        } else {
            return 0;
        }
    }
    return 1;
}
