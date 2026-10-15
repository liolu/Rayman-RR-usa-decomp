/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207bc58 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/spi/pm.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
extern void OS_SpinWait(u32 count);
typedef void (*UnkPmCallback)(u32 result, void *arg);
extern u32 func_02010678(u32 data, UnkPmCallback callback, void *arg);
extern u32 PM_SetBackLight(u32 target, u32 on);
extern u32 PM_GetBackLight(BOOL *top, BOOL *bottom);
extern BOOL PM_SetLCDPower(u32 sw);
extern u32 PM_GetLCDPower(void);
u32 func_02010678(u32 data, UnkPmCallback callback, void *arg);
u32 PM_SetBackLight(u32 target, u32 on);
u32 PM_ForceToPowerOffAsync(UnkPmCallback callback, void *arg) {
    BOOL top;
    BOOL bottom;

    OS_SpinWait(0x996a00);
    if (PM_GetLCDPower() != 1) {
        PM_GetBackLight(&top, &bottom);
        if (top) {
            PM_SetBackLight(0, 0);
        }
        if (bottom) {
            PM_SetBackLight(1, 0);
        }
        while (!PM_SetLCDPower(1)) {
            OS_SpinWait(0x996a00);
        }
    }
    return func_02010678(14, callback, arg);
}
u32 PM_GetBackLight(BOOL *top, BOOL *bottom);
BOOL PM_SetLCDPower(u32 sw);
u32 PM_GetLCDPower(void);
