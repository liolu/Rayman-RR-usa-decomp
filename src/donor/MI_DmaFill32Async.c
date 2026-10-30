/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02067228 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern void MI_WaitDma(u32 dmaNo);
typedef void (*UnkDmaCallback)(void *arg);
extern void func_01ff8214(u32 dmaNo, volatile const void *src, void *dest, u32 ctrl);
extern void OSi_EnterDmaCallback(u32 dmaNo, UnkDmaCallback callback, void *arg);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
static inline void UnkDmaFillAsync(u32 dmaNo, void *dest, u32 data, u32 ctrl) {
    u32 e                            = OS_DisableIrq();
    (((vu32 *) 0x040000e0)[(dmaNo)]) = data;
    func_01ff8214(dmaNo, &(((vu32 *) 0x040000e0)[(dmaNo)]), dest, ctrl);
    OS_RestoreIrq(e);
}
void MI_DmaFill32Async(u32 dmaNo, void *dest, u32 data, u32 size, UnkDmaCallback callback, void *arg) {
    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    MI_WaitDma(dmaNo);
    if (callback) {
        OSi_EnterDmaCallback(dmaNo, callback, arg);
        {
            u32 e      = OS_DisableIrq();
            u32 ctrl   = 0xc5000000 | (size >> 2);
            vu32 *fill = &(((vu32 *) 0x040000e0)[(dmaNo)]);
            *fill      = data;
            func_01ff8214(dmaNo, fill, dest, ctrl);
            OS_RestoreIrq(e);
        }
    } else {
        UnkDmaFillAsync(dmaNo, dest, data, 0x85000000 | (size >> 2));
    }
}
void MI_WaitDma(u32 dmaNo);
