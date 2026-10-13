#include "m2c.h"

s32 func_0201bdd0(s32 *);                           /* extern */

s32 *func_0203284c(s32 *arg0) {
    s32 *p;

    p = arg0;
    if (*p != 2) {
        do {
            p = M2C_FIELD(p, s32 **, 0x1C);
            if (func_0201bdd0(p) == 0) {
                return p;
            }
        } while (*p != 2);
    }
    return p;
}
