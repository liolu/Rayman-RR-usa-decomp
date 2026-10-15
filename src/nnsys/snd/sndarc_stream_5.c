#include "m2c.h"

M2C_UNK FS_CloseFile(s32);

void CloseFileStream(s32 arg0) {
    FS_CloseFile(arg0 + 0x5C);
}
