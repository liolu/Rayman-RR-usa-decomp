#include "m2c.h"

M2C_UNK DC_FlushRange(M2C_UNK, s32);
M2C_UNK FS_SeekFile(M2C_UNK, s32, M2C_UNK);
M2C_UNK FS_ReadFile(M2C_UNK, M2C_UNK, s32);

s32 func_02077f80(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    FS_SeekFile(arg0, arg2, 0);
    DC_FlushRange(arg1, arg3);
    FS_ReadFile(arg0, arg1, arg3);
    return arg2 + arg3;
}
