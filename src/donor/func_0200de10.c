/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_AllocFromHeap from https://github.com/RonyxDumb/mkds verification/leafs/arm7_037fa164.c (license: none), reused by
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
extern void *func_0200de10(OSArenaId id, OSHeapHandle heap, u32 size);
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
extern void *data_020c0ebc[OS_ARENA_MAX];
Cell *func_0200e02c(Cell *list, Cell *cell);
Cell *func_0200e004(Cell *list, Cell *cell);
void *func_0200de10(OSArenaId id, OSHeapHandle heap, u32 size) {
    OSHeapInfo *heapInfo;
    HeapDesc *hd;
    Cell *cell;
    Cell *newCell;
    long leftoverSize;
    OSIntrMode enabled = OS_DisableIrq();

    ((void) 0);
    ((void) 0);
    heapInfo = data_020c0ebc[id];

    if (!heapInfo) {
        (void) OS_RestoreIrq(enabled);
        return ((void *) 0);
    }

    if (heap < 0) {
        heap = heapInfo->currentHeap;
    }

    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);

    hd = &heapInfo->heapArray[heap];

    size += (((u32) (sizeof(Cell)) + (32) - 1) & ~((32) - 1));
    size = (((u32) (size) + (32) - 1) & ~((32) - 1));

    for (cell = hd->free; cell != ((void *) 0); cell = cell->next) {
        if ((long) size <= cell->size) {
            break;
        }
    }

    if (cell == ((void *) 0)) {

        (void) OS_RestoreIrq(enabled);
        return ((void *) 0);
    }

    ((void) 0);
    ((void) 0);

    leftoverSize = cell->size - (long) size;

    if (leftoverSize < ((((u32) (sizeof(Cell)) + (32) - 1) & ~((32) - 1)) + 32)) {
        hd->free = func_0200e004(hd->free, cell);
    } else {
        cell->size    = (long) size;
        newCell       = (Cell *) ((char *) cell + size);
        newCell->size = leftoverSize;

        newCell->prev = cell->prev;
        newCell->next = cell->next;

        if (newCell->next != ((void *) 0)) {
            newCell->next->prev = newCell;
        }

        if (newCell->prev != ((void *) 0)) {
            newCell->prev->next = newCell;
        } else {
            ((void) 0);
            hd->free = newCell;
        }
    }

    hd->allocated = func_0200e02c(hd->allocated, cell);
#line 314
    (void) OS_RestoreIrq(enabled);
    return (void *) ((char *) cell + (((u32) (sizeof(Cell)) + (32) - 1) & ~((32) - 1)));
}
