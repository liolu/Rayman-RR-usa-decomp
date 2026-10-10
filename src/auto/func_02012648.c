/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200eb98();                            /* extern */
extern s16 data_020c196c;

void func_02012648(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_020c196c = 1;
        return;
    }
    func_0200eb98();
}
