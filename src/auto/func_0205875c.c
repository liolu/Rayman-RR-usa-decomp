#include "m2c.h"

M2C_UNK func_020485e4(M2C_UNK, s16, s32);
M2C_UNK func_02048d84(M2C_UNK, s16, s32 *);
extern M2C_UNK data_020dc29c;

void func_0205875c(void) {
    s32 sp0;

    func_02048d84(0, 0, &sp0);
    if (sp0 != 0) {
        func_020485e4(0, 0, sp0);
    }
    func_02048d84(0, M2C_FIELD(&data_020dc29c, s16 *, 0x38), &sp0);
    if (sp0 == 0) {
        return;
    }
    func_020485e4(0, M2C_FIELD(&data_020dc29c, s16 *, 0x38), sp0);
}
