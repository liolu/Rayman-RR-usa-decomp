#include "m2c.h"

M2C_UNK func_0200d578(M2C_UNK *);                   /* extern */
M2C_UNK func_0200d5e8(M2C_UNK *);                   /* extern */
M2C_UNK func_0200dd9c(M2C_UNK, s32, s32);           /* extern */
extern M2C_UNK data_020c0a44;
extern s32 data_020cfa78;
extern s32 data_020cfa8c;

void func_02041e50(void) {
    s32 temp_r4;

    temp_r4 = data_020cfa78;
    func_0200d5e8(&data_020c0a44);
    func_0200dd9c(0, data_020cfa8c, temp_r4);
    func_0200d578(&data_020c0a44);
}
