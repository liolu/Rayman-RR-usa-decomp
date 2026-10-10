#include "m2c.h"

M2C_UNK func_0200d6fc(M2C_UNK, s32);                /* extern */
M2C_UNK func_02013ec8(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_02013f34(M2C_UNK, M2C_UNK, s32);       /* extern */

s32 func_02077f80(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    func_02013ec8(arg0, arg2, 0);
    func_0200d6fc(arg1, arg3);
    func_02013f34(arg0, arg1, arg3);
    return arg2 + arg3;
}
