#include "m2c.h"

M2C_UNK func_0202e1e0(s32, M2C_UNK *);              /* extern */

s32 func_0205d144(void *arg0) {
    s32 sp0[3];

    func_0202e1e0(M2C_FIELD(arg0, s32 *, 0x24), sp0);
    return sp0[2] << 4;
}
