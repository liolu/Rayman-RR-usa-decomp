/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK GX_VRAMCNT_SetLCDC_(u16);
extern u16 gGXState;

u16 resetBankForX_(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    gGXState |= temp_r4;
    GX_VRAMCNT_SetLCDC_(temp_r4);
    return temp_r4;
}
