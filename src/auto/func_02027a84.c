#include "m2c.h"

extern M2C_UNK data_020c57b4;

void func_02027a84(void) {
    M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), s32 *, 0x18) =
        (s32) M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), s32 *, 0x20);
    M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), s32 *, 0x20) = 0;
}
