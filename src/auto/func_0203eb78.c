#include "m2c.h"

typedef struct Item {
    char pad0[4];
    long alPos[3];
    char pad1[0x18];
    unsigned long ulF28;
    char pad2[2];
    short sState;
    char pad3[0x38];
} Item;

extern long func_02030c98(void *p_vA, void *p_vB);
extern long func_02030ce0(void *p_vA, void *p_vB);
extern unsigned char func_02030d2c(void *p_vA);

void func_0203eb78(char *p_cObj, long lCount, Item *p_stItem) {
    long i      = 0;
    Item *p_stA = 0;
    Item *p_stB = 0;
    unsigned char ucA;
    *(unsigned long *) (p_cObj + 0xc) &= ~0x80000;
    for (i = 0; i < lCount; p_stItem++, i++) {
        ucA = (p_stItem->sState != 0x63);
        if (ucA) {
            if (p_stA == 0) {
                if (func_02030c98(p_cObj, p_stItem->alPos) != 0) {
                    p_stA = p_stItem;
                }
            }
            if (p_stB == 0) {
                if (func_02030ce0(p_cObj, p_stItem) != 0) {
                    p_stB = p_stItem;
                }
            }
        }
    }
    if (p_stB != 0 && p_stA != 0) {
        if (((p_stA->ulF28 & 2) && func_02030d2c(p_stA) != 0) || ((p_stB->ulF28 & 2) && func_02030d2c(p_stB) != 0)) {
            *(unsigned long *) (p_cObj + 0xc) |= 0x80000;
        }
    }
}
