#include "m2c.h"

M2C_UNK func_02001588(s32, s32, s32);
s32 func_020668d0();

void func_02066c80(void *arg0, void *arg1) {
    func_02001588(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg1, s32 *, 0x14), func_020668d0() - 0x24);
}
