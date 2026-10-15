#include "m2c.h"

void *func_020414ac(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02041da8(void *);
M2C_UNK func_02063538(u16);

void func_0206374c(void) {
    void *temp_r0;

    temp_r0 = func_020414ac(0, 0x8000, 0x24);
    func_02063538(M2C_FIELD(temp_r0, u16 *, 0xA));
    func_02041da8(temp_r0);
}
