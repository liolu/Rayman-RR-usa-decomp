/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK OS_WaitIrq(M2C_UNK, M2C_UNK);               /* extern */
M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */

void func_0200e978(void) {
    WaitByLoop(1);
    OS_WaitIrq(1, 1);
}
