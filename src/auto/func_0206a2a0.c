#include "m2c.h"

s32 func_02029888();
void *func_0205703c();
M2C_UNK func_0206a1f8();

void *func_0206a2a0(void) {
    void *temp_r4;

    func_0206a1f8();
    temp_r4                      = func_0205703c();
    M2C_FIELD(temp_r4, s32 *, 4) = func_02029888();
    return temp_r4;
}
