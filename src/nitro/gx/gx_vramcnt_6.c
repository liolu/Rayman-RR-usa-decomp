#include "m2c.h"

M2C_UNK GX_VRAMCNT_SetLCDC_();
extern u16 gGXState;

void GX_SetBankForLCDC(s32 arg0) {
    gGXState |= arg0;
    GX_VRAMCNT_SetLCDC_(arg0);
}
