#include "m2c.h"

typedef struct Info {
    char pad[2];
    unsigned short usFlags;
} Info;

typedef struct Holder {
    char pad[0xc];
    Info *p_stInfo;
} Holder;

extern long func_020482b0(void *p_vA);

long func_02030ed4(char *p_cA, char *p_cB) {
    long lRes = 0;
    long lVal;
    Holder *p_stH;
    Info *p_stI;
    if (p_cB == 0) {
        return 0;
    }
    p_stH = *(Holder **) (p_cB + 0x20);
    if (p_stH != 0) {
        lRes = func_020482b0(p_stH);
    }
    lVal = 0;
    if (p_stH != 0) {
        p_stI = p_stH->p_stInfo;
        p_stH = 0;
        if (p_stI != (Info *) -1 && (p_stI->usFlags & 1) == 1) {
            p_stH = (Holder *) 1;
        }
        if ((long) p_stH & 0xFF) {
            lVal = 0x1000;
        }
    }
    if (lRes != 0) {
        lVal = *(long *) (p_cB + 0x58);
    }
    if (*(unsigned long *) (p_cA + 8) & 0x80) {
        lVal = *(long *) (p_cA + 0x1c);
    }
    return lVal;
}
