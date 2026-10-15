#include "m2c.h"

M2C_UNK func_0202e1e0(s32, void *);

s32 func_0205d0fc(void *arg0) {
    u8 sp0[12];

    func_0202e1e0(M2C_FIELD(arg0, s32 *, 0x24), sp0);
    return M2C_FIELD(sp0, s32 *, 0) * 0x10;
}
