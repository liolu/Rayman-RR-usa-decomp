/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* GX_Init from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u16 vu16;
extern void func_0200eb98(void);
extern u32 OS_GetLockID(void);
extern u32 GXi_DmaId;
extern u16 GXi_VRamLockId;
extern void GX_InitGXState(void);
extern void MI_DmaFill32(u32 dmaNo, void *dest, u32 data, u32 size);
extern void MIi_CpuClear32(u32 data, void *dest, u32 size);
extern u32 GXi_DmaId;
extern u16 GXi_VRamLockId;
void func_020152ac(void) {
    (*(vu16 *) 0x04000304) |= 0x8000;
    (*(vu16 *) 0x04000304) = ((*(vu16 *) 0x04000304) & ~0x20e) | 0x20e;
    (*(vu16 *) 0x04000304) |= 1;
    GX_InitGXState();

    while (GXi_VRamLockId == 0) {
        s32 lockId = OS_GetLockID();
        if (lockId == -3) {
            func_0200eb98();
        }
        GXi_VRamLockId = lockId;
    }

    (*(vu16 *) 0x04000004)          = 0;
    (*(u32 *) ((0x04000000) | 0x0)) = 0;

    if (GXi_DmaId != -1) {
        MI_DmaFill32(GXi_DmaId, (void *) &(*(vu16 *) ((0x04000000) | 0x8)), 0, 0x60);
        (*(u16 *) ((0x04000000) | 0x6c)) = 0;
        MI_DmaFill32(GXi_DmaId, (void *) &(*(u32 *) ((0x04001000) | 0x0)), 0, 0x70);
    } else {
        MIi_CpuClear32(0, (void *) &(*(vu16 *) ((0x04000000) | 0x8)), 0x60);
        (*(u16 *) ((0x04000000) | 0x6c)) = 0;
        MIi_CpuClear32(0, (void *) &(*(u32 *) ((0x04001000) | 0x0)), 0x70);
    }

    (*(u16 *) ((0x04000000) | 0x20)) = 0x100;
    (*(u16 *) ((0x04000000) | 0x26)) = 0x100;
    (*(u16 *) ((0x04000000) | 0x30)) = 0x100;
    (*(u16 *) ((0x04000000) | 0x36)) = 0x100;
    (*(u16 *) ((0x04001000) | 0x20)) = 0x100;
    (*(u16 *) ((0x04001000) | 0x26)) = 0x100;
    (*(u16 *) ((0x04001000) | 0x30)) = 0x100;
    (*(u16 *) ((0x04001000) | 0x36)) = 0x100;
}
