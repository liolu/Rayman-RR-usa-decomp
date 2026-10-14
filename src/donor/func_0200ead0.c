/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02079f00 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_vramexclusive.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
extern u32 OS_DisableIrq(void);
extern u32 OS_RestoreIrq(u32 state);
extern u32 data_020c0fa8;
extern u16 data_020c0fac[9];
u32 func_0200eac8(register u32 value);
void func_0200ead0(u32 bank, u16 lockID) {
    u32 mask;
    u32 enabled = OS_DisableIrq();

    mask = bank & data_020c0fa8 & 0x1ff;

    while (1) {
        s32 i = 31 - func_0200eac8(mask);
        if (i < 0) {
            break;
        }
        mask &= ~(1 << i);
        if (data_020c0fac[i] == lockID) {
            data_020c0fac[i] = 0;
            data_020c0fa8 &= ~(1 << i);
        }
    }
    OS_RestoreIrq(enabled);
}
