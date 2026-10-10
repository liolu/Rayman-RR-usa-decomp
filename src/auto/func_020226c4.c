#include "m2c.h"

M2C_UNK func_0201d3cc(M2C_UNK, void *);             /* extern */
M2C_UNK func_02021c8c(s32);                         /* extern */

void func_020226c4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_02021c8c(M2C_FIELD(arg0, s32 *, 0));
    }
    func_0201d3cc(0, arg0);
}
