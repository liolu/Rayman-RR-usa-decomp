#include "m2c.h"

s32 func_020899ec();
M2C_UNK func_02089b48();
extern s8 data_020e3b29;

void func_02089ee4(void *arg0) {
    func_02089b48();
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 8), u8 *, 0x74) & 2) {
        return;
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x68) == 0) {
        return;
    }
    if (data_020e3b29 != 0) {
        return;
    }
    if (func_020899ec(arg0, arg0 + 0x2C) == 0) {
        return;
    }
    func_02089b48(arg0);
}
