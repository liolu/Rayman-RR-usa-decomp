/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

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
extern UnkFndList sRootList;
extern UnkFndHeapHead *FindContainHeap(UnkFndList *list, const void *memBlock);

/* func_020f298c from projets/resident-evil-deadly-silence/src/donor/func_020f298c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
UnkFndList *FindListContainHeap(void *heap) {
    UnkFndList *list            = &sRootList;
    UnkFndHeapHead *containHeap = FindContainHeap(list, heap);

    if (containHeap != 0) {
        list = &containHeap->unk_0c;
    }
    return list;
}
