#include "m2c.h"

M2C_UNK SNDi_SetPlayerParam(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void SND_SetPlayerVolume(M2C_UNK arg0, M2C_UNK arg1) {
    SNDi_SetPlayerParam(arg0, 6, arg1, 2);
}
