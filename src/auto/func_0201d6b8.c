#include "m2c.h"

M2C_UNK func_0201d360();
extern M2C_UNK data_020c4a50;

void func_0201d6b8(void) {
    if (M2C_FIELD(&data_020c4a50, s32 *, 4) != 0) {
        func_0201d360();
        M2C_FIELD(&data_020c4a50, s32 *, 4) = 0;
    }
    if (M2C_FIELD(&data_020c4a50, s32 *, 8) != 0) {
        func_0201d360();
        M2C_FIELD(&data_020c4a50, s32 *, 8) = 0;
    }
    if (M2C_FIELD(&data_020c4a50, s32 *, 0xC) != 0) {
        func_0201d360();
        M2C_FIELD(&data_020c4a50, s32 *, 0xC) = 0;
    }
    M2C_FIELD(&data_020c4a50, s32 *, 0) = 0;
}
