#include "m2c.h"

M2C_UNK func_0200d578(M2C_UNK *);
M2C_UNK OS_LockMutex(M2C_UNK *);
s32 func_0200de10(M2C_UNK, s32, s32);
M2C_UNK func_0200eb98();
extern M2C_UNK data_020c0a44;
extern s32 data_020cfa78;
extern s32 data_020cfa7c;
extern s32 data_020cfa80;
extern s32 data_020cfa8c;

void func_02041de0(s32 arg0) {
    s32 temp_r0;

    data_020cfa7c = arg0;
    OS_LockMutex(&data_020c0a44);
    temp_r0 = func_0200de10(0, data_020cfa8c, (arg0 + 7) & ~7);
    if (temp_r0 == 0) {
        func_0200eb98();
    }
    func_0200d578(&data_020c0a44);
    data_020cfa78 = temp_r0;
    data_020cfa80 = temp_r0 + arg0;
}
