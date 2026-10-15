/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 FSi_SendCommand(void *, M2C_UNK);

s32 FS_CloseFile(void *arg0) {
    if (FSi_SendCommand(arg0, 8) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0xE;
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) (M2C_FIELD(arg0, s32 *, 0xC) & ~0x30);
    return 1;
}
