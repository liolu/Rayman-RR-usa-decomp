#include "m2c.h"

M2C_UNK func_02046e40();
extern s32 data_020d00d8;

s32 func_02047098(s32 arg0) {
    if (data_020d00d8 == 0) {
        data_020d00d8 = 1;
        func_02046e40();
    }
    if (arg0 != 0) {
        return 0x7FFD;
    }
    return 0x7FFE;
}
