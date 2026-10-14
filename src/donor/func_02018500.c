/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207a180 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/pxi/pxi_fifo.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern u32 OS_DisableIrq(void);
extern u32 OS_RestoreIrq(u32 state);
typedef void (*PxiCallback)(u32 tag, u32 data, BOOL err);
extern void func_02018500(u32 tag, PxiCallback callback);
typedef struct UnkPxiSystemWork {
    u8 unk_000[0x388];
    u32 unk_388[2];
} UnkPxiSystemWork;
static inline UnkPxiSystemWork *GetPxiSystemWork(void) {
    return (UnkPxiSystemWork *) 0x027ffc00;
}
extern PxiCallback data_020c2058[32];
void func_02018500(u32 tag, PxiCallback callback) {
    u32 enabled = OS_DisableIrq();

    data_020c2058[tag] = callback;
    if (callback) {
        GetPxiSystemWork()->unk_388[0] |= (1 << tag);
    } else {
        GetPxiSystemWork()->unk_388[0] &= ~(1 << tag);
    }
    OS_RestoreIrq(enabled);
}
