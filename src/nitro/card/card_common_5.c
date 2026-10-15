#include "m2c.h"

extern s32 data_020c1084;

void CARD_Enable(s32 arg0) {
    data_020c1084 = arg0;
}
