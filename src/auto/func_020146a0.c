/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02012050();                                /* extern */
M2C_UNK func_020136bc(M2C_UNK, M2C_UNK);            /* extern */

void func_020146a0(M2C_UNK arg0) {
    M2C_UNK var_r1;

    if (func_02012050() != 0) {
        var_r1 = 5;
    } else {
        var_r1 = 0;
    }
    func_020136bc(arg0, var_r1);
}
