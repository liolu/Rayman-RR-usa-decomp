#include "m2c.h"

M2C_UNK func_0201fc34();                            /* extern */
M2C_UNK func_0201fc70();                            /* extern */
M2C_UNK func_0201fc74();                            /* extern */
s32 func_020b5324(M2C_UNK *);                       /* extern */
M2C_UNK func_020b53e0(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020c57b4;
extern M2C_UNK data_020c57d0;
extern M2C_UNK func_02027b4c;

void func_0202806c(void *arg0) {
    func_0201fc70();
    M2C_FIELD(&data_020c57b4, void **, 0x10) = arg0;
    if ((M2C_FIELD(arg0, s32 *, 4) == 0) || (M2C_FIELD(arg0, s32 *, 8) != 0)) {
        func_0201fc74();
        return;
    }
    M2C_FIELD(arg0, s32 *, 8)                                        = 1;
    M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), s32 *, 4)    = 0;
    M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), s32 *, 0)    = 0;
    M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), s32 *, 0x24) = 0;
    M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), s32 *, 0x28) = 0;
    M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), s32 *, 0x2C) = 0;
    if (M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), s32 *, 0x10) != 0) {
        if (func_020b5324(&data_020c57d0) != 0) {
            func_020b53e0(&data_020c57d0, 0);
            func_0201fc34();
        }
        M2C_FIELD(&data_020c57b4, s32 *, 0x14)                           = 0;
        M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), s32 *, 0x10) = 0;
    }
    M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), M2C_UNK **, 0x18) = &func_02027b4c;
    func_0201fc74();
}
