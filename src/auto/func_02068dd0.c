#include "m2c.h"

M2C_UNK func_02001588(s32, s32, s32);
s32 func_02068adc();

void func_02068dd0(void *arg0, void *arg1) {
    func_02001588(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg1, s32 *, 0x28), func_02068adc());
}
