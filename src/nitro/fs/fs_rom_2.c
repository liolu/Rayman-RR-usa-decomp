/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 CARD_IsPulledOut();
M2C_UNK FS_NotifyArchiveAsyncEnd(M2C_UNK, M2C_UNK);

void FSi_OnRomReadDone(M2C_UNK arg0) {
    M2C_UNK var_r1;

    if (CARD_IsPulledOut() != 0) {
        var_r1 = 5;
    } else {
        var_r1 = 0;
    }
    FS_NotifyArchiveAsyncEnd(arg0, var_r1);
}
