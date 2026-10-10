/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0201887c(s32, M2C_UNK);                /* extern */
extern s32 data_020e9278;

void func_020b2650(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_0201887c(arg0, 0);
    data_020e9278 &= ~arg0;
}
