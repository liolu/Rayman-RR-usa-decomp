#include "m2c.h"

M2C_UNK func_02048db0();
M2C_UNK func_02049b64();
M2C_UNK func_0204a8a8();
M2C_UNK func_0204c600(M2C_UNK *);
M2C_UNK func_0204cd00();
extern s32 sIsThreadCreated;
extern M2C_UNK data_020dba30;

void func_02049b18(void) {
    func_02049b64();
    func_0204cd00();
    func_0204c600(&data_020dba30);
    func_02048db0();
    func_0204a8a8();
    sIsThreadCreated = 0;
}
