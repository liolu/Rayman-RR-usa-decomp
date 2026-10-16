#include "m2c.h"

typedef struct Node {
    struct Node *p_stNext;
    long l4;
    long l8;
    void *p_vData;
} Node;

typedef struct List {
    Node *p_stHead;
    long l4;
    long lCount;
} List;

typedef struct Owner {
    List *p_stList;
    long l4;
    signed char cWrap;
} Owner;

void *func_02069380(Owner *p_stOwner, long lIdx) {
    List *p_stList;
    Node *p_stNode;
    long lCount;
    long lStep;
    if (p_stOwner != 0) {
        p_stList = p_stOwner->p_stList;
        if (p_stList != 0) {
            lCount = p_stList->lCount;
            if (p_stOwner->cWrap != 0) {
                lIdx = lIdx % lCount;
                if (lIdx < 0) {
                    lIdx += lCount;
                }
            } else if (lIdx < 0 || lIdx >= lCount) {
                return 0;
            }
            lStep    = lCount - lIdx - 1;
            p_stNode = p_stList->p_stHead;
            for (lIdx = 0; lIdx < lStep; lIdx++) {
                p_stNode = p_stNode->p_stNext;
            }
            return p_stNode->p_vData;
        }
    }
    return 0;
}
