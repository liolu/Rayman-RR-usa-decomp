/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_Terminate from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_terminate.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern u32 OS_DisableIrq(void);
extern void func_0200eb98(void);
extern void func_0200eb8c(void);
void func_0200eb98(void) {
    while (1) {
        OS_DisableIrq();
        func_0200eb8c();
    }
}
void func_0200eb8c(void);
