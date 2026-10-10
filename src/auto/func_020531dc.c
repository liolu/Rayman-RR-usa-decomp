#include "m2c.h"

M2C_UNK func_0200d6fc(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_02017d70(s32, M2C_UNK *, s32, M2C_UNK); /* extern */
extern s32 data_020bbfe0;
extern M2C_UNK data_020dbb3c;

void func_020531dc(void) {
    func_0200d6fc(&data_020dbb3c, 0x400);
    func_02017d70(data_020bbfe0, &data_020dbb3c, 0xC0C0C0C0, 0x400);
}
