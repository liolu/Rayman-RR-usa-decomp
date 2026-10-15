#include "m2c.h"

M2C_UNK func_02019ed8(s16, M2C_UNK *);
extern M2C_UNK data_020dc19c;

void func_0205936c(void) {
    u8 sp0[8];

    func_02019ed8(M2C_FIELD(&data_020dc19c, s16 *, 0x70), sp0);
    M2C_FIELD(&data_020dc19c, s32 *, 0xC0) = (s32) M2C_FIELD(&data_020dc19c, s32 *, 0x74);
}
