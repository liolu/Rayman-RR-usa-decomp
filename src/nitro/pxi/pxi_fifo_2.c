/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern u32 OS_DisableIrq(void);
extern u32 OS_RestoreIrq(u32 state);
typedef void (*PxiCallback)(u32 tag, u32 data, BOOL err);
extern void PXI_SetFifoRecvCallback(u32 tag, PxiCallback callback);
typedef struct UnkPxiSystemWork {
    u8 unk_000[0x388];
    u32 unk_388[2];
} UnkPxiSystemWork;
extern PxiCallback FifoRecvCallbackTable[32];

/* func_0207a180 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/pxi/pxi_fifo.c (license: none), reused by
 * tools/donor_match.py */
static inline UnkPxiSystemWork *GetPxiSystemWork(void) {
    return (UnkPxiSystemWork *) 0x027ffc00;
}

void PXI_SetFifoRecvCallback(u32 tag, PxiCallback callback) {
    u32 enabled = OS_DisableIrq();

    FifoRecvCallbackTable[tag] = callback;
    if (callback) {
        GetPxiSystemWork()->unk_388[0] |= (1 << tag);
    } else {
        GetPxiSystemWork()->unk_388[0] &= ~(1 << tag);
    }
    OS_RestoreIrq(enabled);
}
