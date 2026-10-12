#include "m2c.h"

s32 func_02084450(M2C_UNK, s32, M2C_UNK *);         /* extern */

void func_020a56a4(M2C_UNK arg0, s32 arg1) {
    u8 sp0[16];

    func_02084450(arg0, func_02084450(arg0, arg1, sp0), sp0);
}
