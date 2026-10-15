#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, M2C_UNK);

void OSi_FreeStackAlloc(M2C_UNK arg0) {
    OS_FreeToHeap(0, -1, arg0);
}
