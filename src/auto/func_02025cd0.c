#include "m2c.h"

M2C_UNK func_0201d108();                            /* extern */
M2C_UNK func_0201d444();                            /* extern */
M2C_UNK func_0201d5b8(M2C_UNK);                     /* extern */
s32 func_02021928(M2C_UNK);                         /* extern */
M2C_UNK func_02025c5c();                            /* extern */
M2C_UNK func_02026f50(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020bc24c;
extern M2C_UNK data_020c5740;
extern M2C_UNK data_020c57a4;

s32 func_02025cd0(M2C_UNK arg0) {
    s32 temp_r4;

    func_0201d444();
    func_0201d108();
    M2C_FIELD(&data_020c5740, s32 *, 8) = 0;
    func_02026f50(&data_020bc24c, 0);
    func_02025c5c();
    M2C_FIELD(&data_020c57a4, s32 *, 0) = 0;
    M2C_FIELD(&data_020c57a4, s32 *, 4) = 0;
    M2C_FIELD(&data_020c57a4, s32 *, 8) = 0;
    temp_r4                             = func_02021928(arg0);
    func_0201d5b8(0);
    M2C_FIELD(&data_020c5740, s32 *, 0x40) = 1;
    return temp_r4;
}
