#include "m2c.h"

extern M2C_UNK OSi_IrqThreadQueue;

void OS_InitIrqTable(void) {
    M2C_FIELD(&OSi_IrqThreadQueue, s32 *, 4) = 0;
    M2C_FIELD(&OSi_IrqThreadQueue, s32 *, 0) = 0;
}
