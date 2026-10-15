#include "m2c.h"

M2C_UNK PMi_DeleteList(M2C_UNK *, M2C_UNK);
extern M2C_UNK data_020c1030;
extern M2C_UNK data_020c1028;

void PM_DeletePostSleepCallback(M2C_UNK arg0) {
    PMi_DeleteList(&data_020c1030, arg0);
}

void PM_DeletePreSleepCallback(M2C_UNK arg0) {
    PMi_DeleteList(&data_020c1028, arg0);
}
