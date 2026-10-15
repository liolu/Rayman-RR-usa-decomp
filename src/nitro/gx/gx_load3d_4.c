/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern u32 GX_ResetBankForTex();
extern void GX_BeginLoadTex();
extern u32 sTexLCDCBlk1;
extern u32 sSzTexBlk1;
extern u32 sTexLCDCBlk2;
extern s32 sTex;
extern const struct {
    u16 blk1;
    u16 blk2;
    u16 szBlk1;
} sTexStartAddrTable[16];

/* func_0214c6a8 from https://github.com/RonyxDumb/mkds src/arm9/0214c6a8_func_0214c6a8.c (license: none), reused by
 * tools/donor_match.py */
void GX_BeginLoadTex() {
    u32 temp      = GX_ResetBankForTex();
    sTex = (s32) temp;
    sTexLCDCBlk1 = (u32) (sTexStartAddrTable[temp].blk1 << 0xC);
    sTexLCDCBlk2 = (u32) (sTexStartAddrTable[temp].blk2 << 0xC);
    sSzTexBlk1 = (u32) (sTexStartAddrTable[temp].szBlk1 << 0xC);
}
