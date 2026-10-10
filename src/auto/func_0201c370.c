#include "m2c.h"

M2C_UNK func_02001588(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_0201c370(void *arg0, M2C_UNK arg1) {
    func_02001588(M2C_FIELD(arg0, s32 *, 0x24), arg1, 0x64);
    M2C_FIELD(arg0, s32 *, 0x28) = -1;
}
