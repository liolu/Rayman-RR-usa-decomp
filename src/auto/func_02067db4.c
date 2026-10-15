#include "m2c.h"

M2C_UNK FS_TryLoadTable(void *, M2C_UNK);
M2C_UNK func_0204a8a4(s32, M2C_UNK);

void func_02067db4(void *arg0) {
    func_0204a8a4(M2C_FIELD(arg0, s32 *, 0x2C), 0x32);
    FS_TryLoadTable(arg0 + 4, 0x32);
    FS_TryLoadTable(arg0 + 0x10, 0x32);
    FS_TryLoadTable(arg0 + 3, 0x32);
    FS_TryLoadTable(arg0 + 0x20, 0x32);
    FS_TryLoadTable(arg0 + 0x24, 0x32);
    FS_TryLoadTable(arg0, 0x32);
    FS_TryLoadTable(arg0 + 1, 0x32);
    FS_TryLoadTable(arg0 + 2, 0x32);
    FS_TryLoadTable(arg0 + 0x1C, 0x32);
    FS_TryLoadTable(arg0 + 0x28, 0x32);
    FS_TryLoadTable(M2C_FIELD(arg0, s32 *, 0x2C) + 0x2C, 0x32);
    FS_TryLoadTable(M2C_FIELD(arg0, s32 *, 0x2C) + 0x44, 0x32);
    FS_TryLoadTable(M2C_FIELD(arg0, s32 *, 0x2C) + 0x38, 0x32);
    FS_TryLoadTable(M2C_FIELD(arg0, s32 *, 0x2C) + 0x50, 0x32);
    FS_TryLoadTable(M2C_FIELD(arg0, s32 *, 0x2C) + 0x6C, 0x32);
    FS_TryLoadTable(M2C_FIELD(arg0, s32 *, 0x2C) + 0x70, 0x32);
}
