#include "m2c.h"

M2C_UNK func_02018aa4(M2C_UNK);                     /* extern */
s32 func_02019568();                                /* extern */
M2C_UNK func_02019614();                            /* extern */
M2C_UNK func_0201fc34();                            /* extern */
extern M2C_UNK data_020c4a64;
extern M2C_UNK func_0201e848;

void func_0201e514(void) {
    if (M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x10) != 0) {
        if (func_02019568() & 1) {
            func_02018aa4(0);
            func_0201fc34();
        }
        if (M2C_FIELD(&data_020c4a64, s32 *, 0x14) != 0) {
            func_02019614();
            func_0201fc34();
            M2C_FIELD(&data_020c4a64, s32 *, 0x14) = 0;
        }
        M2C_FIELD(&data_020c4a64, s32 *, 0x24)                           = 0;
        M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x10) = 0;
    }
    M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), M2C_UNK **, 0x18) = &func_0201e848;
}
