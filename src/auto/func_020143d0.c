/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0201440c();                            /* extern */
extern s32 data_020c1f80;

void func_020143d0(s32 arg0) {
    if (data_020c1f80 != 0) {
        return;
    }
    data_020c1f80 = 1;
    func_0201440c(arg0);
}
