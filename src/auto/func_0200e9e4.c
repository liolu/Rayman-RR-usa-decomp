/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020182f4();                            /* extern */
s32 func_020184d8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02018500(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_020c0fa0;
extern M2C_UNK func_0200e9a0;

void func_0200e9e4(void) {
    if (data_020c0fa0 != 0) {
        return;
    }
    data_020c0fa0 = 1;
    func_020182f4();
    do {

    } while (func_020184d8(0xC, 1) == 0);
    func_02018500(0xC, &func_0200e9a0);
}
