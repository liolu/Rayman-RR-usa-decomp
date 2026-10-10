#include "m2c.h"

M2C_UNK func_02018aa4(M2C_UNK);                     /* extern */
s32 func_02019568();                                /* extern */
M2C_UNK func_02019614();                            /* extern */
M2C_UNK func_0201fc34();                            /* extern */
M2C_UNK func_0201fc70();                            /* extern */
M2C_UNK func_0201fc74();                            /* extern */
extern M2C_UNK data_020c4a64;
extern M2C_UNK func_0201e514;

void func_0201f9c4(void *arg0) {
    func_0201fc70();
    M2C_FIELD(&data_020c4a64, void **, 0x20) = arg0;
    if ((M2C_FIELD(arg0, s32 *, 4) == 0) || (M2C_FIELD(arg0, s32 *, 8) != 0)) {
        func_0201fc74();
        return;
    }
    M2C_FIELD(arg0, s32 *, 8)                                        = 1;
    M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 4)    = 0;
    M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0)    = 0;
    M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x24) = 0;
    M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x28) = 0;
    M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x2C) = 0;
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
    M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), M2C_UNK **, 0x18) = &func_0201e514;
    func_0201fc74();
}
