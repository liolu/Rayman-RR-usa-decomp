#include "m2c.h"

M2C_UNK func_0201d3cc(M2C_UNK, void *);             /* extern */
s32 func_02021be4(s32);                             /* extern */

s32 func_0202264c(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 4) != 0) && (func_02021be4(M2C_FIELD(arg0, s32 *, 0)) != 0)) {
        return 1;
    }
    func_0201d3cc(0, arg0);
    return 0;
}
