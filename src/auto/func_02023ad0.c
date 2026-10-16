#include "m2c.h"

typedef struct Sub {
    char pad[4];
    unsigned char ucFlag;
    char pad2;
    short sVal;
} Sub;

typedef struct Src {
    char pad[0x1c];
    unsigned short usCount;
    char pad2[0xa];
    Sub *p_stSub;
} Src;

typedef struct Dst {
    char pad[8];
    long lMode;
    char pad2[4];
    Sub *p_stCur;
    long lA;
    long lB;
    char pad3[0xc];
    Sub *p_stSub;
    long lC;
    char pad4[4];
    Src *p_stSrc;
} Dst;

void func_02023ad0(Dst *p_stDst, Src *volatile p_stSrcArg) {
    Src *p_stSrc;
    p_stDst->lMode   = 1;
    p_stSrc          = p_stSrcArg;
    p_stDst->p_stSrc = p_stSrc;
    if (p_stSrc->usCount == 0) {
        p_stDst->p_stSub = 0;
        p_stDst->lC      = -1;
        return;
    }
    p_stDst->p_stCur = 0;
    p_stDst->lA      = -1;
    p_stDst->lB      = -1;
    p_stDst->lC      = 0;
    p_stDst->p_stSub = p_stSrc->p_stSub;
    if (p_stDst->p_stSub->ucFlag == 0) {
        return;
    }
    p_stDst->p_stCur = p_stDst->p_stSub;
    p_stDst->lA      = p_stDst->lC;
    p_stDst->lB      = p_stDst->p_stCur->sVal;
}
