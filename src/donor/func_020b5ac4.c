/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200827c from projets/heroes-of-mana/src/donor/func_0200827c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
extern const u16(*ctrdgi_fl_maxtime);
typedef struct {
    void *prevObject;
    void *nextObject;
} NNSFndLink;
typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;
} NNSFndList;
typedef struct NNSiFndHeapHead NNSiFndHeapHead;
struct NNSiFndHeapHead {
    u32 signature;
    NNSFndLink link;
    NNSFndList childList;
    void *heapStart;
    void *heapEnd;
    u32 attribute;
};
typedef struct NNSiFndFrmHeapState NNSiFndFrmHeapState;
struct NNSiFndFrmHeapState {
    u32 tagName;
    void *headAllocator;
    void *tailAllocator;
    NNSiFndFrmHeapState *pPrevState;
};
typedef struct NNSiFndFrmHeapHead NNSiFndFrmHeapHead;
struct NNSiFndFrmHeapHead {
    void *headAllocator;
    void *tailAllocator;
    NNSiFndFrmHeapState *pState;
};
typedef u32 NNSiUIntPtr;
inline NNSiUIntPtr NNSiGetUIntPtr(const void *ptr) {
    return (NNSiUIntPtr) ptr;
}
inline void *AddU32ToPtr(void *ptr, u32 val) {
    return (void *) (NNSiGetUIntPtr(ptr) + val);
}
static inline NNSiFndFrmHeapHead *GetFrmHeapHeadPtrFromHeapHead(NNSiFndHeapHead *pHHead) {
    return AddU32ToPtr(pHHead, sizeof(NNSiFndHeapHead));
}
void func_020b5ac4(NNSiFndHeapHead *pHeapHd) {
    NNSiFndFrmHeapHead *pFrmHeapHd = GetFrmHeapHeadPtrFromHeapHead(pHeapHd);

    ((void) 0);

    {
        NNSiFndFrmHeapState *pState;
        for (pState = pFrmHeapHd->pState; pState; pState = pState->pPrevState) {
            pState->tailAllocator = pHeapHd->heapEnd;
        }
    }

    pFrmHeapHd->tailAllocator = pHeapHd->heapEnd;
}
