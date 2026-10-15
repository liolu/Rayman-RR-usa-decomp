#include "m2c.h"

M2C_UNK func_02041da8();
extern s32 data_020cf9d4;
extern s32 data_020cf9dc;

void func_02041bf4(void) {
    if (data_020cf9d4 != 0) {
        func_02041da8();
        data_020cf9d4 = 0;
    }
    func_02041da8(data_020cf9dc);
    data_020cf9dc = 0;
}
