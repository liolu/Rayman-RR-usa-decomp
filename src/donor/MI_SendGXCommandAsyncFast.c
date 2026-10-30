/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02067744 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma_gxcommand.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
extern void MI_WaitDma(u32 dmaNo);
typedef void (*UnkDmaCallback)(void *arg);
typedef void (*UnkIrqHandler)(void);
typedef struct {
    volatile BOOL isBusy;
    u32 dmaNo;
    u32 src;
    u32 size;
    UnkDmaCallback callback;
    void *arg;
    u32 fifoCond;
    UnkIrqHandler fifoIntrHandler;
} UnkGxCmdDmaState;
extern UnkGxCmdDmaState MIi_GXDmaParams;
extern void MIi_DmaSetParams(u32 dmaNo, const void *src, void *dest, u32 ctrl);
extern void OSi_EnterDmaCallback(u32 dmaNo, UnkDmaCallback callback, void *arg);
extern void MIi_CheckAnotherAutoDMA(u32 dmaNo, u32 dmaType);
extern void MIi_CheckDma0SourceAddress(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void MIi_DMAFastCallback(void *arg);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void MI_SendGXCommandAsyncFast(u32 dmaNo, const void *src, u32 size, UnkDmaCallback callback, void *arg) {
    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    while (MIi_GXDmaParams.isBusy) {
    }
    MIi_GXDmaParams.isBusy   = 1;
    MIi_GXDmaParams.dmaNo    = dmaNo;
    MIi_GXDmaParams.callback = callback;
    MIi_GXDmaParams.arg      = arg;
    MIi_CheckAnotherAutoDMA(dmaNo, 0x38000000);
    MIi_CheckDma0SourceAddress(dmaNo, (u32) src, size, 0);
    MI_WaitDma(dmaNo);
    OSi_EnterDmaCallback(dmaNo, MIi_DMAFastCallback, 0);
    MIi_DmaSetParams(dmaNo, src, ((void *) 0x04000400), 0xfc400000 | (size >> 2));
}
void MIi_DMAFastCallback(void *arg);
