#include "m2c.h"

M2C_UNK func_020151e8();
M2C_UNK *G2_GetBG3ScrPtr();
M2C_UNK func_02040e34(M2C_UNK *, s32, M2C_UNK);

void func_02061c3c(void *arg0) {
    u8 sp0[24];

    func_02040e34(sp0, M2C_FIELD(arg0, s32 *, 0), 0x18);
    func_02040e34((M2C_UNK *) 0x05000000, M2C_FIELD(arg0, s32 *, 8), 0x200);
    func_02040e34(G2_GetBG3ScrPtr(), M2C_FIELD(arg0, s32 *, 0xC), 0xC000);
    func_020151e8();
}
