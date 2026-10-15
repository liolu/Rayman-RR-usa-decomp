/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u64 vu64;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern void OSi_EnterTimerCallback(u32 timerNo, void (*func)(void *), void *arg);
extern BOOL OSi_NeedResetTimer;
extern vu64 OSi_TickCounter;
extern void OSi_CountUpTick(void);

/* func_02079b88 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_tick.c (license: none), reused by
 * tools/donor_match.py */
void OSi_CountUpTick(void) {
    OSi_TickCounter++;

    if (OSi_NeedResetTimer) {
        (*(vu16 *) 0x04000102) = 0;
        (*(vu16 *) 0x04000100) = 0;
        (*(vu16 *) 0x04000102) = 0xc1;
        OSi_NeedResetTimer     = 0;
    }

    OSi_EnterTimerCallback(0, (void (*)(void *)) OSi_CountUpTick, 0);
}
