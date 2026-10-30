/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020670cc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern void MI_DmaFill32(u32 dmaNo, void *dest, u32 data, u32 size);
extern void Dma_LoadChannelAndSettle(u32 dmaNo, volatile const void *src, void *dest, u32 ctrl);
void MI_DmaFill32(u32 dmaNo, void *dest, u32 data, u32 size) {
    vu32 *cnt;
    if (size == 0) {
        return;
    }
    cnt = &(((vu32 *) 0x040000b0)[(dmaNo) * 3 + 2]);
    while (*cnt & 0x80000000) {
    }
    {
        u32 e                            = OS_DisableIrq();
        (((vu32 *) 0x040000e0)[(dmaNo)]) = data;
        Dma_LoadChannelAndSettle(dmaNo, &(((vu32 *) 0x040000e0)[(dmaNo)]), dest, 0x85000000 | (size >> 2));
        OS_RestoreIrq(e);
    }
    while (*cnt & 0x80000000) {
    }
}
