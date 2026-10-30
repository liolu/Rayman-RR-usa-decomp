/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02067d60 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_card_dma.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
extern void MIi_CheckAnotherAutoDMA(u32 dmaNo, s32 timing);
extern void MIi_CheckDma0SourceAddress(u32 dmaNo, const void *src, u32 size, u32 mode);
extern void MIi_DmaSetParams(u32 dmaNo, const void *src, void *dest, u32 ctrl);
void MIi_CardDmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size) {
    vu32 *reg;

    MIi_CheckAnotherAutoDMA(dmaNo, -1);
    MIi_CheckDma0SourceAddress(dmaNo, src, size, 0x1000000);
    if (size == 0) {
        return;
    }
    reg = (vu32 *) 0x040000b0 + (dmaNo * 3 + 2);
    while (*reg & 0x80000000) {
    }
    MIi_DmaSetParams(dmaNo, src, dest, 0xaf000001);
}
