#include "m2c.h"

M2C_UNK DC_FlushRange(M2C_UNK, M2C_UNK);
M2C_UNK func_0200eb98();
M2C_UNK FS_SeekFile(M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK FS_ReadFile(M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK FS_CloseFile(M2C_UNK *);
s32 FS_OpenFile(M2C_UNK *, M2C_UNK);
M2C_UNK FS_InitFile(M2C_UNK *);

void func_02041ec4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    u8 sp0[72];

    FS_InitFile(sp0);
    if (FS_OpenFile(sp0, arg0) == 0) {
        func_0200eb98();
    }
    FS_SeekFile(sp0, arg1, 0);
    DC_FlushRange(arg3, arg2);
    FS_ReadFile(sp0, arg3, arg2);
    FS_CloseFile(sp0);
}
