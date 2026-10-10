/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200d800(M2C_UNK, s32);                /* extern */
M2C_UNK func_0200d814(M2C_UNK, s32);                /* extern */
s32 func_0200d828(M2C_UNK);                         /* extern */
s32 func_0200d914(M2C_UNK);                         /* extern */
extern s32 data_020c0eb4;

void func_0200daec(void) {
    if (data_020c0eb4 != 0) {
        return;
    }
    data_020c0eb4 = 1;
    func_0200d814(0, func_0200d914(0));
    func_0200d800(0, func_0200d828(0));
    func_0200d800(2, 0);
    func_0200d814(2, 0);
    func_0200d814(3, func_0200d914(3));
    func_0200d800(3, func_0200d828(3));
    func_0200d814(4, func_0200d914(4));
    func_0200d800(4, func_0200d828(4));
    func_0200d814(5, func_0200d914(5));
    func_0200d800(5, func_0200d828(5));
    func_0200d814(6, func_0200d914(6));
    func_0200d800(6, func_0200d828(6));
}
