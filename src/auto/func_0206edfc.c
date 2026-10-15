#include "m2c.h"

M2C_UNK DC_FlushRange(s32, M2C_UNK);
M2C_UNK FS_SeekFile(M2C_UNK *, s32, M2C_UNK);
M2C_UNK FS_ReadFile(M2C_UNK *, s32, M2C_UNK);
extern M2C_UNK data_020ddd40;
extern s32 data_020dddd4;

s32 func_0206edfc(s32 arg0) {
    FS_SeekFile(&data_020ddd40, arg0 << 5, 0);
    DC_FlushRange(data_020dddd4, 0x20);
    FS_ReadFile(&data_020ddd40, data_020dddd4, 0x20);
    return data_020dddd4;
}
