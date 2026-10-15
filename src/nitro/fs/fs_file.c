#include "m2c.h"

M2C_UNK FSi_ReadFileCore(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void FS_ReadFile(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    FSi_ReadFileCore(arg0, arg1, arg2, 0);
}
