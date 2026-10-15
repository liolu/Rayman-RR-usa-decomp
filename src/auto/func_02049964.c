#include "engine.h"
#include "m2c.h"

void OS_FreeToHeap(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_020d0e50;

void func_02049964(void) {
    if (M2C_FIELD(&data_020d0e50, s32 *, 0x10) != 0) {
        OS_FreeToHeap(0, -1, M2C_FIELD(&data_020d0e50, s32 *, 0x10));
        M2C_FIELD(&data_020d0e50, s32 *, 0x10) = 0;
    }
    if (M2C_FIELD(&data_020d0e50, s32 *, 0x1C) == 0) {
        return;
    }
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_020d0e50, s32 *, 0x1C));
    M2C_FIELD(&data_020d0e50, s32 *, 0x1C) = 0;
}
