#include "m2c.h"

M2C_UNK func_020782f4();
M2C_UNK func_020786e0(void *);

s32 func_020791b8(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x14);
    func_020786e0(temp_r4);
    if (M2C_FIELD(temp_r4, s32 *, 0x28) != 0) {
        func_020782f4();
        M2C_FIELD(temp_r4, s32 *, 0x28) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xA4) = (s32) M2C_FIELD(arg0, s32 *, 0xA8);
    return 1;
}
