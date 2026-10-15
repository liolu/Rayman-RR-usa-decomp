#include "m2c.h"

M2C_UNK func_0200d578(M2C_UNK *);
extern M2C_UNK sSndMutex;

void SNDi_UnlockMutex(void) {
    func_0200d578(&sSndMutex);
}
