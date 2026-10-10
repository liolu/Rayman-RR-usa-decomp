#include "m2c.h"

M2C_UNK func_02041da8();                         /* extern */
extern s32 data_020cf9d0;
extern s32 data_020cf9d8;

void func_02041c3c(void) {
    if (data_020cf9d0 != 0) {
        func_02041da8();
        data_020cf9d0 = 0;
    }
    func_02041da8(data_020cf9d8);
    data_020cf9d8 = 0;
}
