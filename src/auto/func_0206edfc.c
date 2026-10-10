#include "m2c.h"

M2C_UNK func_0200d6fc(s32, M2C_UNK);                /* extern */
M2C_UNK func_02013ec8(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_02013f34(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK data_020ddd40;
extern s32 data_020dddd4;

s32 func_0206edfc(s32 arg0) {
    func_02013ec8(&data_020ddd40, arg0 << 5, 0);
    func_0200d6fc(data_020dddd4, 0x20);
    func_02013f34(&data_020ddd40, data_020dddd4, 0x20);
    return data_020dddd4;
}
