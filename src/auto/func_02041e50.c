#include "m2c.h"

M2C_UNK func_0200d578(M2C_UNK *);
M2C_UNK OS_LockMutex(M2C_UNK *);
M2C_UNK OS_FreeToHeap(M2C_UNK, s32, s32);
extern M2C_UNK data_020c0a44;
extern s32 data_020cfa78;
extern s32 data_020cfa8c;

void func_02041e50(void) {
    s32 temp_r4;

    temp_r4 = data_020cfa78;
    OS_LockMutex(&data_020c0a44);
    OS_FreeToHeap(0, data_020cfa8c, temp_r4);
    func_0200d578(&data_020c0a44);
}
