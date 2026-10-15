/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
extern u32 OS_DisableIrq(void);
extern u32 OS_RestoreIrq(u32 state);
extern u32 OSi_vramExclusive;
extern u16 OSi_vramLockId[9];
u32 OsCountZeroBits(register u32 value);

/* func_02079f00 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_vramexclusive.c (license: none),
 * reused by tools/donor_match.py */
void OSi_UnlockVram(u32 bank, u16 lockID) {
    u32 mask;
    u32 enabled = OS_DisableIrq();

    mask = bank & OSi_vramExclusive & 0x1ff;

    while (1) {
        s32 i = 31 - OsCountZeroBits(mask);
        if (i < 0) {
            break;
        }
        mask &= ~(1 << i);
        if (OSi_vramLockId[i] == lockID) {
            OSi_vramLockId[i] = 0;
            OSi_vramExclusive &= ~(1 << i);
        }
    }
    OS_RestoreIrq(enabled);
}
