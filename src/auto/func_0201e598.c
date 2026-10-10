#include "m2c.h"

extern M2C_UNK data_020c4a64;

void func_0201e598(void) {
    M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x18) =
        (s32) M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x20);
    M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x20) = 0;
}
