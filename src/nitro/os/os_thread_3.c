/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
extern u32 OS_EnableIrq(void);
extern void func_0200eb8c(void);
extern void OSi_IdleThreadProc(void *arg);

/* func_02078bc4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_thread.c (license: none), reused by
 * tools/donor_match.py */
void OSi_IdleThreadProc(void *arg) {
    OS_EnableIrq();
    while (1) {
        func_0200eb8c();
    }
}
