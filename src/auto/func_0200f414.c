/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020182f4();                            /* extern */
s32 func_020184d8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02018500(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_020c0fc0;
extern M2C_UNK data_020c0fc4;
extern M2C_UNK func_0200f4a4;

void func_0200f414(void) {
    if (data_020c0fc0 != 0) {
        return;
    }
    data_020c0fc0 = 1;
    func_020182f4();
    M2C_FIELD(&data_020c0fc4, s16 *, 0x32) = 0;
    M2C_FIELD(&data_020c0fc4, s16 *, 0x36) = 0;
    M2C_FIELD(&data_020c0fc4, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_020c0fc4, s32 *, 0)    = 0;
    M2C_FIELD(&data_020c0fc4, s32 *, 0x10) = 0;
    M2C_FIELD(&data_020c0fc4, s16 *, 0x30) = 0;
    M2C_FIELD(&data_020c0fc4, s16 *, 0x34) = 0;
    do {

    } while (func_020184d8(6, 1) == 0);
    func_02018500(6, &func_0200f4a4);
}
