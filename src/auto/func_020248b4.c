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

extern void func_0202792c(void *p_vA);
extern void func_02025d68(void);
extern void func_02024e94(void *p_vA);
extern void func_0201d3cc(void *p_vA, Node *p_stN);

void func_020248b4(Node *p_stN) {
    if (p_stN->lKind != 0) {
        func_0202792c(p_stN->p_vA);
        func_02025d68();
    } else {
        func_02024e94(p_stN->p_vA);
    }
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
