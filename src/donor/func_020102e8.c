/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207bc58 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/spi/pm.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
extern void func_0200e96c(u32 count);
typedef void (*UnkPmCallback)(u32 result, void *arg);
extern u32 func_02010678(u32 data, UnkPmCallback callback, void *arg);
extern u32 func_02010398(u32 target, u32 on);
extern u32 func_02010204(BOOL *top, BOOL *bottom);
extern BOOL func_0200fe84(u32 sw);
extern u32 func_0200fe68(void);
u32 func_02010678(u32 data, UnkPmCallback callback, void *arg);
u32 func_02010398(u32 target, u32 on);
u32 func_020102e8(UnkPmCallback callback, void *arg) {
    BOOL top;
    BOOL bottom;

    func_0200e96c(0x996a00);
    if (func_0200fe68() != 1) {
        func_02010204(&top, &bottom);
        if (top) {
            func_02010398(0, 0);
        }
        if (bottom) {
            func_02010398(1, 0);
        }
        while (!func_0200fe84(1)) {
            func_0200e96c(0x996a00);
        }
    }
    return func_02010678(14, callback, arg);
}
u32 func_02010204(BOOL *top, BOOL *bottom);
BOOL func_0200fe84(u32 sw);
u32 func_0200fe68(void);
