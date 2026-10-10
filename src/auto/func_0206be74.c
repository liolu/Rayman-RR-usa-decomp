#include "m2c.h"

M2C_UNK func_020650d4(void *, M2C_UNK);             /* extern */

void func_0206be74(void *arg0) {
    void *temp_r0;

    temp_r0 = *M2C_FIELD(arg0, void ***, 4);
    if (M2C_FIELD(temp_r0, u8 *, 0xDA) == 0) {
        return;
    }
    func_020650d4(temp_r0, 0);
}
