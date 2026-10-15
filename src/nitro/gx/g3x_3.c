/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
extern u32 GXi_DmaId;
extern void MI_DmaFill32(u32 dmaNo, void *dest, u32 data, u32 size);
extern void MIi_CpuClear32(u32 data, void *dest, u32 size);
extern void G3X_InitTable(void);
extern void MI_DmaFill32Async(u32 dmaNo, void *dest, u32 data, u32 size, void (*callback)(void *), void *arg);

/* func_02065444 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/g3x.c (license: none), reused by
 * tools/donor_match.py */
void G3X_InitTable(void) {
    s32 i;

    if (GXi_DmaId != -1) {
        MI_DmaFill32Async(GXi_DmaId, (void *) 0x04000330, 0, 0x10, 0, 0);
        MI_DmaFill32(GXi_DmaId, (void *) 0x04000360, 0, 0x60);
    } else {
        MIi_CpuClear32(0, (void *) 0x04000330, 0x10);
        MIi_CpuClear32(0, (void *) 0x04000360, 0x60);
    }
    for (i = 0; i < 0x20; i++) {
        (*(vu32 *) 0x040004d0) = 0;
    }
}
