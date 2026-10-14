/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020775dc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_interrupt.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;
extern UnkIrqCallbackInfo data_020c0be0[8];
extern void func_0200c3b8(u32 timerNo, void (*func)(void *), void *arg);
extern u32 func_0200c34c(u32 mask);
extern UnkIrqCallbackInfo data_020c0be0[8];
void func_0200c3b8(u32 timerNo, void (*func)(void *), void *arg) {
    u32 mask                          = 1 << (timerNo + 3);
    (data_020c0be0 + 4)[timerNo].func = func;
    (data_020c0be0 + 4)[timerNo].arg  = arg;
    func_0200c34c(mask);
    (data_020c0be0 + 4)[timerNo].enable = 1;
}
u32 func_0200c34c(u32 mask);
