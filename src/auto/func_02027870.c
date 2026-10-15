#include "m2c.h"

M2C_UNK func_0201fc34();
s32 func_020b5324(M2C_UNK *);
extern M2C_UNK data_020c57b4;
extern M2C_UNK data_020c57d0;
extern M2C_UNK func_020275c0;

void func_02027870(void) {
    M2C_FIELD(&data_020c57b4, s32 *, 4) = func_020b5324(&data_020c57d0);
    func_0201fc34();
    M2C_FIELD(&data_020c57b4, s32 *, 0)                                   = 1;
    M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), s32 *, 0xC)       = 1;
    M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), M2C_UNK **, 0x1C) = &func_020275c0;
    M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), s32 *, 0x20) =
        (s32) M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), s32 *, 0x18);
    M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), s32 *, 0x18) = 0;
}
