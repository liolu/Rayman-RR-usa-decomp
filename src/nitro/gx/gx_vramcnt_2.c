#include "m2c.h"

M2C_UNK resetBankForX_(M2C_UNK *);
extern M2C_UNK data_020c200a;
extern M2C_UNK data_020c2008;

void GX_ResetBankForTexPltt(void) {
    resetBankForX_(&data_020c200a);
}

void GX_ResetBankForTex(void) {
    resetBankForX_(&data_020c2008);
}
