#include "m2c.h"

extern M2C_UNK data_020c5740;
extern s32 data_020c5788;

void func_02027070(s32 arg0, s32 arg1) {
    if (arg0 < 0) {
        return;
    }
    if (arg0 >= (s32) M2C_FIELD(&data_020c5740, s32 *, 8)) {
        return;
    }
    M2C_FIELD(((arg0 * 0x48) + data_020c5788), s32 *, 0x30) = arg1;
}
