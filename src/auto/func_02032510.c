#include "m2c.h"

typedef struct Info {
    char pad[2];
    unsigned short usFlags;
} Info;

typedef struct Holder {
    char pad[0xc];
    Info *p_stInfo;
} Holder;

typedef struct Item {
    char pad0[4];
    long alPos[3];
    char pad1[0xc];
    Holder *p_stHolder;
    char pad2[0xe];
    short sState;
    char pad3[0x38];
} Item;

extern long VEC_DotProduct(const void *p_vA, const void *p_vB);

void func_02032510(long lCount, Item *p_stItem, char *p_cCtx) {
    long i;
    long alDir[3];
    unsigned char ucA;
    unsigned char ucB;
    long lC;
    Info *p_stI;
    for (i = 0; i < lCount; p_stItem++, i++) {
        ucA = (p_stItem->sState != 0x63);
        if (ucA) {
            alDir[0] = 0;
            alDir[1] = 0;
            alDir[2] = 0x1000;
            ucB      = (VEC_DotProduct(p_stItem->alPos, alDir) >= *(long *) (p_cCtx + 0x18));
            if (ucB) {
                lC    = 0;
                p_stI = p_stItem->p_stHolder->p_stInfo;
                if (p_stI != (Info *) -1 && (p_stI->usFlags & 0x10) == 0x10) {
                    lC = 1;
                }
                if (lC & 0xFF) {
                    p_stItem->sState = 0x63;
                }
            }
        }
    }
}
