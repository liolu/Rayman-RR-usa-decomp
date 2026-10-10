#include "m2c.h"

M2C_UNK func_02048530(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_02048d04(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02048d3c(M2C_UNK, M2C_UNK, s32);       /* extern */
extern M2C_UNK data_020dc19c;
extern M2C_UNK data_020dc2d0;

void func_02058a28(void) {
    func_02048530(&data_020dc2d0, 0x67);
    func_02048d04(M2C_FIELD(&data_020dc19c, s32 *, 0x134), 0x1800, 0xC00);
    func_02048d3c(0, 0, M2C_FIELD(&data_020dc19c, s32 *, 0x134));
}
