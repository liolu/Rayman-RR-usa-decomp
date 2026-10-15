#include "m2c.h"

M2C_UNK OS_LockMutex(M2C_UNK *);
extern M2C_UNK sSndMutex;

void SNDi_LockMutex(void) {
    OS_LockMutex(&sSndMutex);
}
