/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02077360 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_irqwait.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef volatile u32 vu32;
typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;
extern u8 SDK_AUTOLOAD_DTCM_START[];
extern UnkIrqCallbackInfo OSi_IrqCallbackInfo[8];
extern u16 OSi_IrqCallbackInfoIndex[8];
extern u32 OS_DisableIrqMask(u32 mask);
void OSi_IrqCallback(int index) {
    u32 mask             = 1 << OSi_IrqCallbackInfoIndex[index];
    void (*func)(void *) = OSi_IrqCallbackInfo[index].func;

    OSi_IrqCallbackInfo[index].func = 0;
    if (func != 0) {
        func(OSi_IrqCallbackInfo[index].arg);
    }

    (*(vu32 *) ((u32) SDK_AUTOLOAD_DTCM_START + 0x3FF8)) |= mask;

    if (!OSi_IrqCallbackInfo[index].enable) {
        OS_DisableIrqMask(mask);
    }
}
