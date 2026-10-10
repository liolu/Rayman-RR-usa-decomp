#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020d3f44;

s32 func_02049654(s32 arg0) {
    s32 temp_r2;

    if ((M2C_FIELD(arg0, u16 *, 0xE) & 0xF00) == 0xA00) {
        return 0;
    }
    if (M2C_FIELD(arg0, u16 *, 0x12) == 0) {
        return 0;
    }
    temp_r2 = (M2C_FIELD(arg0, u16 *, 6) * 0x14) + (s32) &data_020d3f44;
    if (M2C_FIELD(temp_r2, u16 *, 8) & 0x22) {
        return (s32) M2C_FIELD(temp_r2, u16 *, 0xA);
    }
    return -1;
}
