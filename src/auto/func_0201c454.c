#include "m2c.h"

M2C_UNK func_0202cb6c(M2C_UNK *, s32);
M2C_UNK func_0202d1e8(s32, M2C_UNK *, s32);

void func_0201c454(void *arg0) {
    u8 sp0[100];

    func_0202cb6c(sp0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x24));
    func_0202d1e8(M2C_FIELD(arg0, s32 *, 0x20), sp0, M2C_FIELD(arg0, s32 *, 0x24));
}
