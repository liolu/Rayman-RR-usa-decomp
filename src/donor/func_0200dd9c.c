/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_FreeFromHeap from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_alloc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern u32 OS_DisableIrq(void);
extern u32 OS_RestoreIrq(u32 irq_flag);
typedef struct UnkHeapCell UnkHeapCell;
struct UnkHeapCell {
    UnkHeapCell *prev;
    UnkHeapCell *next;
    s32 size;
};
typedef struct UnkHeapDesc {
    s32 size;
    UnkHeapCell *free;
    UnkHeapCell *allocated;
} UnkHeapDesc;
typedef struct UnkHeapInfo {
    s32 currentHeap;
    s32 numHeaps;
    void *arenaStart;
    void *arenaEnd;
    UnkHeapDesc *heapArray;
} UnkHeapInfo;
extern UnkHeapInfo *data_020c0ebc[9];
UnkHeapCell *func_0200e004(UnkHeapCell *list, UnkHeapCell *cell);
UnkHeapCell *func_0200df3c(UnkHeapCell *list, UnkHeapCell *cell);
void func_0200dd9c(u32 id, s32 heap, void *ptr) {
    UnkHeapInfo *heapInfo;
    UnkHeapDesc *hd;
    UnkHeapCell *cell;
    u32 prev = OS_DisableIrq();

    heapInfo = data_020c0ebc[id];
    if (heap < 0) {
        heap = heapInfo->currentHeap;
    }
    hd = &heapInfo->heapArray[heap];

    cell          = (UnkHeapCell *) ((char *) ptr - 0x20);
    hd->allocated = func_0200e004(hd->allocated, cell);
    hd->free      = func_0200df3c(hd->free, cell);

    OS_RestoreIrq(prev);
}
