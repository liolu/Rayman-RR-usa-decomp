/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK CARD_UnlockRom(u16);
M2C_UNK CARD_LockRom(u16);
extern s32 fsi_card_lock_id;

s32 FSi_RomArchiveProc(s32 arg0, s32 arg1) {
    switch (arg1) {
        case 9:
            CARD_LockRom((u16) fsi_card_lock_id);
            return 0;
        case 10:
            CARD_UnlockRom((u16) fsi_card_lock_id);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
