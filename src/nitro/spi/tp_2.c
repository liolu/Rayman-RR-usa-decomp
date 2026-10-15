/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK tpState;

void TP_WaitBusy(s32 arg0) {
    do {

    } while (M2C_FIELD(&tpState, volatile u16 *, 0x36) & arg0);
}
