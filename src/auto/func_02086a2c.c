#include "m2c.h"

M2C_UNK func_02085b38(s32, s32, M2C_UNK, M2C_UNK);  /* extern */

void func_02086a2c(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if ((arg0 != NULL) && (arg1 != 0)) {
        func_02085b38(M2C_FIELD(arg0, s32 *, 0x18), arg1, arg3, arg2);
    }
}
