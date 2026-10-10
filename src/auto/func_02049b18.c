#include "m2c.h"

M2C_UNK func_02048db0();                            /* extern */
M2C_UNK func_02049b64();                            /* extern */
M2C_UNK func_0204a8a8();                            /* extern */
M2C_UNK func_0204c600(M2C_UNK *);                   /* extern */
M2C_UNK func_0204cd00();                            /* extern */
extern s32 data_020db984;
extern M2C_UNK data_020dba30;

void func_02049b18(void) {
    func_02049b64();
    func_0204cd00();
    func_0204c600(&data_020dba30);
    func_02048db0();
    func_0204a8a8();
    data_020db984 = 0;
}
