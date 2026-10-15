/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_InitAlloc from https://github.com/RonyxDumb/mkds verification/leafs/arm7_037fa164.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef u32 OSIntrMode;
extern OSIntrMode OS_DisableIrq(void);
extern OSIntrMode OS_RestoreIrq(OSIntrMode state);
typedef enum {
    OS_ARENA_MAIN         = 0,
    OS_ARENA_MAIN_SUBPRIV = 1,
    OS_ARENA_MAINEX       = 2,
    OS_ARENA_ITCM         = 3,
    OS_ARENA_DTCM         = 4,
    OS_ARENA_SHARED       = 5,
    OS_ARENA_WRAM_MAIN    = 6,
    OS_ARENA_WRAM_SUB     = 7,
    OS_ARENA_WRAM_SUBPRIV = 8,
    OS_ARENA_MAX          = 9
} OSArenaId;
typedef int OSHeapHandle;
extern void *func_0200dca4(OSArenaId id, void *arenaStart, void *arenaEnd, int maxHeaps);
typedef struct Cell Cell;
typedef struct HeapDesc HeapDesc;
struct Cell {
    Cell *prev;
    Cell *next;
    long size;
};
struct HeapDesc {
    long size;
    Cell *free;
    Cell *allocated;
};
typedef struct {
    volatile OSHeapHandle currentHeap;
    int numHeaps;
    void *arenaStart;
    void *arenaEnd;
    HeapDesc *heapArray;
} OSHeapInfo;
extern void *OSiHeapInfo[OS_ARENA_MAX];
void *func_0200dca4(OSArenaId id, void *arenaStart, void *arenaEnd, int maxHeaps) {
    OSHeapInfo *heapInfo;
    u32 arraySize;
    OSHeapHandle i;
    OSIntrMode enabled = OS_DisableIrq();

    ((void) 0);
    ((void) 0);

    ((void) 0);
    ((void) 0);
    ((void) 0);

    heapInfo        = arenaStart;
    OSiHeapInfo[id] = heapInfo;

    arraySize           = sizeof(HeapDesc) * maxHeaps;
    heapInfo->heapArray = (void *) ((u32) arenaStart + sizeof(OSHeapInfo));
    heapInfo->numHeaps  = maxHeaps;

    for (i = 0; i < heapInfo->numHeaps; i++) {
        HeapDesc *hd = &heapInfo->heapArray[i];

        hd->size = -1;
        hd->free = hd->allocated = ((void *) 0);
    }

    heapInfo->currentHeap = -1;

    arenaStart = (void *) ((char *) heapInfo->heapArray + arraySize);
    arenaStart = (void *) (((u32) (arenaStart) + (32) - 1) & ~((32) - 1));

    heapInfo->arenaStart = arenaStart;
    heapInfo->arenaEnd   = (void *) (((u32) (arenaEnd)) & ~((32) - 1));

    ((void) 0);

    (void) OS_RestoreIrq(enabled);
    return heapInfo->arenaStart;
}
