/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_02018424(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void CTRDGi_SendtoPxi(M2C_UNK arg0) {
    if (func_02018424(0xD, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(1);
    } while (func_02018424(0xD, arg0, 0) != 0);
}
