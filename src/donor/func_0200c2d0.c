/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020776b0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_interrupt.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern u32 func_0200c2d0(u32 mask);
static inline BOOL OS_DisableIME(void) {
    u16 prev               = (*(vu16 *) 0x04000208);
    (*(vu16 *) 0x04000208) = 0;
    return (BOOL) prev;
}
static inline BOOL OS_RestoreIME(BOOL enable) {
    u16 prev               = (*(vu16 *) 0x04000208);
    (*(vu16 *) 0x04000208) = (vu16) enable;
    return (BOOL) prev;
}
u32 func_0200c2d0(u32 mask) {
    BOOL ime               = OS_DisableIME();
    u32 prev               = (*(vu32 *) 0x04000214);
    (*(vu32 *) 0x04000214) = mask;
    OS_RestoreIME(ime);
    return prev;
}
