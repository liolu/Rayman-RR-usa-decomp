/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 GX_ResetBankForTexPltt();
extern M2C_UNK sTexPlttStartAddrTable;
extern s32 sTexPlttLCDCBlk;
extern s32 sTexPltt;

void GX_BeginLoadTexPltt(void) {
    s32 temp_r0;

    temp_r0       = GX_ResetBankForTexPltt();
    sTexPltt = temp_r0;
    sTexPlttLCDCBlk = *((u16 *) ((s8 *) &sTexPlttStartAddrTable + ((temp_r0 >> 4) * 2))) << 0xC;
}
