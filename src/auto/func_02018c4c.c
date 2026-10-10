/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200e96c(M2C_UNK);                     /* extern */
s32 func_020184d8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02018500(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_02018b78();                                /* extern */
extern M2C_UNK func_02018cb8;

void func_02018c4c(void) {
    func_02018500(7, &func_02018cb8);
    if (func_02018b78() == 0) {
        return;
    }
    if (func_020184d8(7, 1) != 0) {
        return;
    }
    do {
        func_0200e96c(0x64);
    } while (func_020184d8(7, 1) == 0);
}
