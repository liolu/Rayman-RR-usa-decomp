#include "m2c.h"

M2C_UNK func_02000dc8(M2C_UNK);                     /* extern */
M2C_UNK func_0200b568();                            /* extern */
extern M2C_UNK data_020c04e0;

void func_02000d7c(M2C_UNK arg0) {
    if (M2C_FIELD(&data_020c04e0, s32 *, 0xC) == 0) {
        func_0200b568();
        if (M2C_FIELD(&data_020c04e0, M2C_UNK(**)(), 4) != NULL) {
            M2C_FIELD(&data_020c04e0, M2C_UNK(**)(), 4)();
            M2C_FIELD(&data_020c04e0, M2C_UNK(**)(), 4) = NULL;
        }
    }
    func_02000dc8(arg0);
}
