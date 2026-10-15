/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02015944(M2C_UNK);
void MI_WaitDma(M2C_UNK);
extern s32 GXi_DmaId;
extern s32 sTexLCDCBlk1;
extern s32 sTex;
extern s32 sTexLCDCBlk2;
extern s32 sSzTexBlk1;

void GX_EndLoadTex(void) {
    if (GXi_DmaId != -1) {
        MI_WaitDma(GXi_DmaId);
    }
    func_02015944(sTex);
    sSzTexBlk1 = 0;
    sTexLCDCBlk2 = 0;
    sTexLCDCBlk1 = 0;
    sTex = 0;
}
