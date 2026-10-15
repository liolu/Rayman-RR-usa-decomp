/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020775dc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_interrupt.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;
extern UnkIrqCallbackInfo OSi_IrqCallbackInfo[8];
extern void OSi_EnterTimerCallback(u32 timerNo, void (*func)(void *), void *arg);
extern u32 OS_EnableIrqMask(u32 mask);
extern UnkIrqCallbackInfo OSi_IrqCallbackInfo[8];
void OSi_EnterTimerCallback(u32 timerNo, void (*func)(void *), void *arg) {
    u32 mask                                = 1 << (timerNo + 3);
    (OSi_IrqCallbackInfo + 4)[timerNo].func = func;
    (OSi_IrqCallbackInfo + 4)[timerNo].arg  = arg;
    OS_EnableIrqMask(mask);
    (OSi_IrqCallbackInfo + 4)[timerNo].enable = 1;
}
u32 OS_EnableIrqMask(u32 mask);
