/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_AllocFromArenaHi from https://github.com/RonyxDumb/mkds src/arm9/0200ef4c_Os_ComputeMemoryRegionStartAddress.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
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
extern void *func_0200da58(OSArenaId id);
extern void *func_0200da44(OSArenaId id);
extern void func_0200d814(OSArenaId id, void *newHi);
extern void *func_0200d798(OSArenaId id, u32 size, u32 align);
void *func_0200da58(OSArenaId id);
void *func_0200da44(OSArenaId id);
void func_0200d814(OSArenaId id, void *newHi);
void *func_0200d798(OSArenaId id, u32 size, u32 align) {
    void *ptr;
    u8 *arenaHi;

    arenaHi = func_0200da58(id);
    if (!arenaHi) {
        return ((void *) 0);
    }

    arenaHi = (u8 *) (((u32) (arenaHi)) & ~((align) -1));
    arenaHi -= size;
    arenaHi = ptr = (void *) (((u32) (arenaHi)) & ~((align) -1));

    if (arenaHi < (u8 *) func_0200da44(id)) {
        return ((void *) 0);
    }

    func_0200d814(id, arenaHi);

    return ptr;
}
