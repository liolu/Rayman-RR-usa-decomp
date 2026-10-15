#include "m2c.h"

s32 func_0200fa2c();
M2C_UNK func_02074078(s32, s32);
M2C_UNK func_02074208();
M2C_UNK func_0207451c();
extern M2C_UNK data_020de26c;
extern s32 data_020de658;

void func_02073b80(void) {
    if (M2C_FIELD(&data_020de26c, s32 *, 8) == 0) {
        return;
    }
    if (M2C_FIELD(&data_020de26c, s32 *, 0x10) == 0) {
        func_02074078(func_0200fa2c(), data_020de658);
    }
    func_02074208();
    func_0207451c();
}
