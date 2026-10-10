/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200d3a8();                                /* extern */
M2C_UNK func_0200d800(M2C_UNK, s32);                /* extern */
M2C_UNK func_0200d814(M2C_UNK, s32);                /* extern */
s32 func_0200d828(M2C_UNK);                         /* extern */
s32 func_0200d914(M2C_UNK);                         /* extern */
M2C_UNK func_0200e090(s32);                         /* extern */
M2C_UNK func_0200e098(s32);                         /* extern */
extern s32 data_020c0eb8;

void func_0200da6c(void) {
    func_0200d814(2, func_0200d914(2));
    func_0200d800(2, func_0200d828(2));
    if ((data_020c0eb8 != 0) && ((func_0200d3a8() & 3) != 1)) {
        return;
    }
    func_0200e090(0x0200002B);
    func_0200e098(0x023E0021);
}
