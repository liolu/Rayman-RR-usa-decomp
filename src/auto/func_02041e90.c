#include "m2c.h"

M2C_UNK func_0200eb98();                            /* extern */
extern s32 data_020cfa7c;
extern s32 data_020cfa80;

void func_02041e90(u32 arg0) {
    if (arg0 >= (u32) (data_020cfa80 - data_020cfa7c)) {
        return;
    }
    func_0200eb98();
}
