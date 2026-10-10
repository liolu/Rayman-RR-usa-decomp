#include "m2c.h"

M2C_UNK func_02015f6c();                            /* extern */
extern u16 data_020c2000;

void func_02015830(s32 arg0) {
    data_020c2000 |= arg0;
    func_02015f6c(arg0);
}
