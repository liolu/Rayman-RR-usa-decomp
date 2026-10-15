/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK FSi_FindPath(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void FS_InitFile(void *);

s32 FS_ConvertPathToFileID(s32 arg0, s32 arg1) {
    u8 sp0[76];

    FS_InitFile(sp0);
    if (FSi_FindPath((s32) sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
