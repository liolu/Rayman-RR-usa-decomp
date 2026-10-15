#include "m2c.h"

s32 func_020298b0();
void *func_0205703c();
M2C_UNK func_02067954();
M2C_UNK func_02068010(void *, M2C_UNK);
M2C_UNK func_0206812c(void *, M2C_UNK);
M2C_UNK func_02068170(void *, M2C_UNK, M2C_UNK, M2C_UNK);

void *func_02067a00(void) {
    void *temp_r0;

    func_02067954();
    temp_r0 = func_0205703c();
    func_0206812c(temp_r0, 0);
    func_02068170(temp_r0, 0, 0, 0);
    func_02068010(temp_r0, 1);
    M2C_FIELD(temp_r0, s32 *, 0x34) = func_020298b0();
    return temp_r0;
}
