#include "m2c.h"

typedef struct Group {
    char pad0[0x3c];
    struct Node *p_stFirst;
    struct Node *p_stLast;
    long lCount;
} Group;

typedef struct Parent {
    struct Node *p_stFirst;
    struct Node *p_stLast;
    long lCount;
} Parent;

typedef struct Node {
    long lVal;
    long lKey;
    struct Node *p_stNext;
    struct Node *p_stPrev;
    Parent *p_stParent;
} Node;

extern Group *data_020c5788;
extern void func_02024f54(long lA, long lB, long lC);
extern Node *func_0201d264(long lA, long lSize);

void func_02025018(long lKey, long lIdx, long lVal) {
    Node *p_stN;
    long lFound = 0;
    if (lVal == 0x7F) {
        func_02024f54(lKey, lIdx, lFound);
        return;
    }
    p_stN = data_020c5788[lIdx].p_stFirst;
    if (p_stN != 0) {
        do {
            if (p_stN->lKey == lKey) {
                lFound = 1;
                break;
            }
            p_stN = p_stN->p_stNext;
        } while (p_stN != 0);
    }
    if (lFound == 0) {
        p_stN             = func_0201d264(0, 0x14);
        p_stN->p_stNext   = 0;
        p_stN->p_stPrev   = 0;
        p_stN->p_stParent = 0;
        if (p_stN->p_stNext != 0) {
            p_stN->p_stNext->p_stPrev = p_stN->p_stPrev;
        }
        if (p_stN->p_stPrev != 0) {
            p_stN->p_stPrev->p_stNext = p_stN->p_stNext;
        }
        if (p_stN->p_stParent != 0) {
            p_stN->p_stParent->lCount--;
            if (p_stN->p_stParent->p_stFirst == p_stN) {
                p_stN->p_stParent->p_stFirst = p_stN->p_stNext;
            }
            if (p_stN->p_stParent->p_stLast == p_stN) {
                p_stN->p_stParent->p_stLast = p_stN->p_stPrev;
            }
        }
        p_stN->p_stNext   = 0;
        p_stN->p_stPrev   = 0;
        p_stN->p_stParent = 0;
        p_stN->p_stNext   = 0;
        p_stN->p_stPrev   = data_020c5788[lIdx].p_stLast;
        p_stN->p_stParent = (Parent *) &data_020c5788[lIdx].p_stFirst;
        if (data_020c5788[lIdx].p_stFirst == 0) {
            data_020c5788[lIdx].p_stFirst = p_stN;
        } else {
            data_020c5788[lIdx].p_stLast->p_stNext = p_stN;
        }
        data_020c5788[lIdx].p_stLast = p_stN;
        data_020c5788[lIdx].lCount++;
        p_stN->lKey = lKey;
    }
    p_stN->lVal = lVal;
}
