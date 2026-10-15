/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 FreeTail(M2C_UNK);
M2C_UNK FreeHead();

s32 NNS_FndFreeToFrmHeap(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;

    if (arg1 & 1) {
        FreeHead(arg0);
    }
    temp_r0 = arg1 & 2;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    return FreeTail(arg0);
}
