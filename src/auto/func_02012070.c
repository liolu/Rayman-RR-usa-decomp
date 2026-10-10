/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200eb98();                            /* extern */
M2C_UNK func_02011fd8();                            /* extern */
extern s32 data_020c1960;
extern s32 (*data_020c1964)();

void func_02012070(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if (data_020c1960 != 0) {
            return;
        }
        var_r0        = 1;
        data_020c1960 = 1;
        if (data_020c1964 != NULL) {
            var_r0 = data_020c1964();
        }
        if (var_r0 == 0) {
            return;
        }
        func_02011fd8();
        return;
    }
    func_0200eb98();
}
