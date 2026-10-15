/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214fefc from https://github.com/RonyxDumb/mkds src/arm9/0214fefc_func_0214fefc.c (license: none), reused by
 * tools/donor_match.py */
extern int PMi_Lock(void);
extern void PMi_SendPxiData(int param);
extern void PMi_SetLCDPower(int a, int b, int c, int d);
extern volatile int PMi_SyncFlag;
extern int PMi_SleepEndFlag;
int func_020106ec(unsigned int a, unsigned int b) {
    volatile int *p;

    if (!PMi_Lock()) {
        return 1;
    }
    PMi_SyncFlag = 0;
    PMi_SendPxiData(0x3006000);
    p = &PMi_SyncFlag;
    while (!*p) {
    }
    *p            = 0;
    PMi_SleepEndFlag = 0;
    PMi_SetLCDPower(0, 2, 0, 0);
    PMi_SendPxiData((a & 0xff) | 0x2006100);
    PMi_SendPxiData((b & 0xffff) | 0x1010000);
    return 0;
}
