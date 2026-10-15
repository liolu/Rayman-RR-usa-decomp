/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02077594 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_interrupt.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;
extern UnkIrqCallbackInfo OSi_IrqCallbackInfo[8];
extern void OSi_EnterDmaCallback(u32 dmaNo, void (*func)(void *), void *arg);
extern u32 OS_EnableIrqMask(u32 mask);
extern UnkIrqCallbackInfo OSi_IrqCallbackInfo[8];
void OSi_EnterDmaCallback(u32 dmaNo, void (*func)(void *), void *arg) {
    u32 mask                    = 1 << (dmaNo + 8);
    OSi_IrqCallbackInfo[dmaNo].func   = func;
    OSi_IrqCallbackInfo[dmaNo].arg    = arg;
    OSi_IrqCallbackInfo[dmaNo].enable = OS_EnableIrqMask(mask) & mask;
}
u32 OS_EnableIrqMask(u32 mask);
