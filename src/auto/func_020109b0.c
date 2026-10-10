/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 OS_GetProcMode();                                /* extern */
M2C_UNK func_02018300();                            /* extern */
extern s32 data_020c1034;

void func_020109b0(void) {
    if (data_020c1034 == 0) {
        return;
    }
    do {
        if (OS_GetProcMode() == 0x12) {
            func_02018300();
        }
    } while (data_020c1034 != 0);
}
