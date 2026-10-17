/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK WaitByLoop();                        /* extern */
s32 func_0200c63c(); /* extern */

void func_0200c76c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (func_0200c63c() <= 0) {
        return;
    }
    do {
        WaitByLoop(0x400);
    } while (func_0200c63c(arg0, arg1, arg2, arg3) > 0);
}
