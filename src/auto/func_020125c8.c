/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200eb98();                            /* extern */
M2C_UNK func_020125a8();                            /* extern */
extern s32 data_020c197c;
extern s32 (*data_020c1980)();

void func_020125c8(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if (data_020c197c != 0) {
            return;
        }
        var_r0 = 0;
        if (data_020c1980 != NULL) {
            var_r0 = data_020c1980();
        }
        if (var_r0 != 0) {
            func_020125a8();
        }
        data_020c197c = 1;
        return;
    }
    func_0200eb98();
}
