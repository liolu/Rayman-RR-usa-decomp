/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02015f6c(u16);                         /* extern */
extern u16 data_020c2000;

u16 func_020156d0(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    data_020c2000 |= temp_r4;
    func_02015f6c(temp_r4);
    return temp_r4;
}
