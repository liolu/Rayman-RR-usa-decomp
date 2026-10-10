/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200e960();                                /* extern */
M2C_UNK func_02018300();                            /* extern */
extern s32 data_020c1034;

void func_020109b0(void) {
    if (data_020c1034 == 0) {
        return;
    }
    do {
        if (func_0200e960() == 0x12) {
            func_02018300();
        }
    } while (data_020c1034 != 0);
}
