#include "m2c.h"

s32 func_0200a3b8();
M2C_UNK func_0200a4bc(s32, s32);
void *func_020414ac(M2C_UNK, u16, M2C_UNK);
M2C_UNK func_02041da8(void *);
M2C_UNK func_02085990(void **);

void func_02087714(void *arg0, void **arg1) {
    void *temp_r4;

    temp_r4 = func_020414ac(0x65, M2C_FIELD(arg0, u16 *, 2), 0xC);
    func_02085990(arg1);
    func_0200a4bc(0x45800000, M2C_FIELD(temp_r4, s32 *, 0));
    M2C_FIELD(*arg1, s32 *, 0) = func_0200a3b8();
    func_0200a4bc(0x45800000, M2C_FIELD(temp_r4, s32 *, 4));
    M2C_FIELD(*arg1, s32 *, 4) = func_0200a3b8();
    func_0200a4bc(0x45800000, M2C_FIELD(temp_r4, s32 *, 8));
    M2C_FIELD(*arg1, s32 *, 8) = func_0200a3b8();
    func_02041da8(temp_r4);
}
