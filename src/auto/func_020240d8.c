#include "m2c.h"

M2C_UNK func_02022248(s32);

void func_020240d8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    func_02022248(M2C_FIELD(arg0, s32 *, 0x24));
}
