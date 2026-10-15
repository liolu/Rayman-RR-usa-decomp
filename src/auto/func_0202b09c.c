#include "m2c.h"

M2C_UNK func_0202b0fc(M2C_UNK *, M2C_UNK);
M2C_UNK func_0202fd1c(M2C_UNK, u8, s32);
extern u8 data_020bc534;
extern M2C_UNK data_020c75bc;
extern M2C_UNK data_020cf6cc;

void func_0202b09c(void) {
    func_0202b0fc(&data_020c75bc, 1);
    func_0202fd1c(1, data_020bc534, *((M2C_UNK *) ((s8 *) &data_020cf6cc + (data_020bc534 * 4))));
}
