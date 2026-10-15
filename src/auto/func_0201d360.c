#include "m2c.h"

M2C_UNK func_0201d43c(M2C_UNK, M2C_UNK *);
M2C_UNK func_020300d4(M2C_UNK, M2C_UNK);
M2C_UNK func_020309c8(M2C_UNK);
M2C_UNK func_02030ac0(u8, M2C_UNK, M2C_UNK);
s32 func_0207abe0(u8, M2C_UNK);
M2C_UNK func_0207ac90(M2C_UNK);
extern M2C_UNK data_020bc048;
extern u8 data_020bc050;
extern u8 data_020bc544;

void func_0201d360(M2C_UNK arg0) {
    func_02030ac0(data_020bc050, 0xFF, 0);
    func_020309c8(arg0);
    func_020300d4(arg0, 0);
    if (func_0207abe0(data_020bc544, 0) == 0) {
        return;
    }
    func_0207ac90(0);
    func_0201d43c(8, &data_020bc048);
}
