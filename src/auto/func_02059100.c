#include "m2c.h"

s32 func_02059100(void *arg0, u16 arg1) {
    void *p;
    u16 k;

    if (arg0 == NULL) {
        return -1;
    }
    p = M2C_FIELD(arg0, void **, 0);
    while (p != NULL) {
        k = M2C_FIELD(p, u16 *, 0xC);
        if (k == arg1) {
            return M2C_FIELD(p, s16 *, 0xE);
        }
        if (k > arg1) {
            return -1;
        }
        p = M2C_FIELD(p, void **, 0);
    }
    return -1;
}
