#include "m2c.h"

typedef struct Parent {
    struct Node *p_stFirst;
    struct Node *p_stLast;
    long lCount;
} Parent;

typedef struct Node {
    char pad0[4];
    void *p_vA;
    char pad1[4];
    long lKind;
    struct Node *p_stPrev;
    struct Node *p_stNext;
    Parent *p_stParent;
} Node;

extern long func_020274ec(void *p_vA);
extern long func_02024e88(void *p_vA);
extern void func_0201d3cc(void *p_vA, Node *p_stN);

long func_02024804(Node *p_stN) {
    long lRes;
    if (p_stN->lKind != 0) {
        lRes = func_020274ec(p_stN->p_vA);
    } else {
        lRes = func_02024e88(p_stN->p_vA);
    }
    if (lRes == 0) {
        if (p_stN->p_stPrev != 0) {
            p_stN->p_stPrev->p_stNext = p_stN->p_stNext;
        }
        if (p_stN->p_stNext != 0) {
            p_stN->p_stNext->p_stPrev = p_stN->p_stPrev;
        }
        if (p_stN->p_stParent != 0) {
            p_stN->p_stParent->lCount--;
            if (p_stN->p_stParent->p_stFirst == p_stN) {
                p_stN->p_stParent->p_stFirst = p_stN->p_stPrev;
            }
            if (p_stN->p_stParent->p_stLast == p_stN) {
                p_stN->p_stParent->p_stLast = p_stN->p_stNext;
            }
        }
        p_stN->p_stPrev   = 0;
        p_stN->p_stNext   = 0;
        p_stN->p_stParent = 0;
        func_0201d3cc(0, p_stN);
    }
    return lRes;
}
