/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK FS_SeekFile(void *, s32, M2C_UNK);
M2C_UNK FS_ReadFile(void *, M2C_UNK, M2C_UNK);

void ReadFileStream(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    FS_SeekFile(arg0 + 0x5C, M2C_FIELD(arg0, s32 *, 0xA4) + arg3, 0);
    FS_ReadFile(arg0 + 0x5C, arg1, arg2);
}
