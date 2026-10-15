/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205e778 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/card/card_pullout.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
extern u32 OS_DisableIrq(void);
extern u32 OS_RestoreIrq(u32 irq_flag);
extern void CARDi_PulledOutCallback(u32 tag, u32 data, BOOL err);
extern void CARDi_CheckPulledOutCore(u32 id);
void CARDi_PulledOutCallback(u32 tag, u32 data, BOOL err);
void CARDi_CheckPulledOutCore(u32 id) {
    vu32 boot_id = *(u32 *) ((*(u16 *) 0x027FFC10 == 0) ? 0x027FF800 : 0x027FFC00);
    if (id != boot_id) {
        u32 prevIRQState = OS_DisableIrq();
        CARDi_PulledOutCallback(14, 17, 0);
        OS_RestoreIrq(prevIRQState);
    }
}
