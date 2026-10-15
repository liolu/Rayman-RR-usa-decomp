#include "m2c.h"

M2C_UNK FS_TryLoadTable(s32, M2C_UNK);

void func_02068e68(s32 arg0) {
    FS_TryLoadTable(arg0, 0x32);
    FS_TryLoadTable(arg0 + 4, 0x32);
}
