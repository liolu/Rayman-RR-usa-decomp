/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK NNS_FndRemoveListObject(s32, M2C_UNK);
s32 FindListContainHeap();

void NNSi_FndFinalizeHeap(M2C_UNK arg0) {
    NNS_FndRemoveListObject(FindListContainHeap(), arg0);
}
