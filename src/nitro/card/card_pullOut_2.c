#include "m2c.h"

extern s32 CARDi_IsPulledOutFlag;

s32 CARD_IsPulledOut(void) {
    return CARDi_IsPulledOutFlag;
}
