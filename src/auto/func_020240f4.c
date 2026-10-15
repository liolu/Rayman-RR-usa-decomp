#include "m2c.h"

M2C_UNK func_020221fc(s32);

void func_020240f4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    func_020221fc(M2C_FIELD(arg0, s32 *, 0x24));
}
