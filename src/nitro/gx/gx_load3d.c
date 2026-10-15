/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02015850(M2C_UNK);
void MI_WaitDma(M2C_UNK);
extern s32 GXi_DmaId;
extern s32 sTexPlttLCDCBlk;
extern s32 sTexPltt;

void GX_EndLoadTexPltt(void) {
    if (GXi_DmaId != -1) {
        MI_WaitDma(GXi_DmaId);
    }
    func_02015850(sTexPltt);
    sTexPltt = 0;
    sTexPlttLCDCBlk = 0;
}
