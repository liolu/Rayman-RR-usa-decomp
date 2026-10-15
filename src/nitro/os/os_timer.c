#include "m2c.h"

extern u16 data_020c0f6c;

void OSi_SetTimerReserved(s32 arg0) {
    data_020c0f6c |= 1 << arg0;
}
