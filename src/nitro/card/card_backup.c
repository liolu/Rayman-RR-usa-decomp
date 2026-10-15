#include "m2c.h"

extern void *cardi_common;

s32 CARD_GetBackupSectorSize(void) {
    return M2C_FIELD(cardi_common, s32 *, 0x1C);
}

s32 CARD_GetBackupTotalSize(void) {
    return M2C_FIELD(cardi_common, s32 *, 0x18);
}
