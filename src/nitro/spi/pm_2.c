#include "m2c.h"

M2C_UNK PMi_AppendList(M2C_UNK *, M2C_UNK);
extern M2C_UNK data_020c1030;

void PM_AppendPostSleepCallback(M2C_UNK arg0) {
    PMi_AppendList(&data_020c1030, arg0);
}
