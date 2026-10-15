#include "m2c.h"

M2C_UNK func_0202e19c(s32, M2C_UNK);
M2C_UNK func_0206a65c(void *, M2C_UNK);
void *func_02088e08();

void func_0208d000(void *arg0, M2C_UNK arg1) {
    void *temp_r4;

    temp_r4 = func_02088e08();
    func_0202e19c(M2C_FIELD(arg0, s32 *, 0x24), arg1);
    func_0202e19c(M2C_FIELD(arg0, s32 *, 0x20), arg1);
    M2C_FIELD(temp_r4, s32 *, 0xF8)  = 0;
    M2C_FIELD(temp_r4, s32 *, 0xFC)  = 0;
    M2C_FIELD(temp_r4, s32 *, 0x100) = 0;
    func_0206a65c(arg0, arg1);
}
