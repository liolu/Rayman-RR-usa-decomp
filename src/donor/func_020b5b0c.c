/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020687d4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/fnd/fnd_frameheap.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef struct UnkFndLink {
    void *unk_00;
    void *unk_04;
} UnkFndLink;
typedef struct UnkFndList {
    void *unk_00;
    void *unk_04;
    u16 unk_08;
    u16 unk_0a;
} UnkFndList;
typedef struct UnkFndHeapHead {
    u32 unk_00;
    UnkFndLink unk_04;
    UnkFndList unk_0c;
    void *unk_18;
    void *unk_1c;
    u32 unk_20;
} UnkFndHeapHead;
extern void func_02017f34(u32 value, void *dest, u32 size);
typedef struct UnkFrmHeapState {
    u32 unk_00;
    void *unk_04;
    void *unk_08;
    struct UnkFrmHeapState *unk_0c;
} UnkFrmHeapState;
typedef struct UnkFrmHeapHead {
    void *unk_00;
    void *unk_04;
    UnkFrmHeapState *unk_08;
} UnkFrmHeapHead;
static inline void FillAllocMemory(UnkFndHeapHead *heap, void *address, u32 size) {
    if ((u16) (heap->unk_20 & 0xff) & 1) {
        func_02017f34(0, address, size);
    }
}
void *func_020b5b0c(UnkFrmHeapHead *frm, u32 size, u32 alignment) {
    void *newBlock = (void *) ((u32) ((u32) frm->unk_04 - size) & ~((alignment) -1));

    if ((u32) newBlock < (u32) frm->unk_00) {
        return 0;
    }
    FillAllocMemory(((UnkFndHeapHead *) ((u32) (frm) - sizeof(UnkFndHeapHead))), newBlock, (u32) frm->unk_04 - (u32) newBlock);
    frm->unk_04 = newBlock;
    return newBlock;
}
