#include "m2c.h"

typedef struct Entry {
    long *p_lDst;
    unsigned short usB;
    unsigned short usA;
} Entry;

extern Entry *data_020cf9c0;
extern Entry *data_020cfa80;
extern long func_020413b4(unsigned short usA, unsigned short usB);

void func_02040dd8(void) {
    Entry *p_stE;
    goto check;
body:
    *p_stE->p_lDst = func_020413b4(p_stE->usA, p_stE->usB);
check:
    p_stE = data_020cf9c0;
    if (p_stE == data_020cfa80) {
        p_stE = 0;
    } else {
        data_020cf9c0 = p_stE + 1;
    }
    if (p_stE != 0 && p_stE->p_lDst != 0) {
        goto body;
    }
}
