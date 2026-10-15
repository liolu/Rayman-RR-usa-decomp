#include "m2c.h"

extern s32 data_020e9270;

void NNS_SndUnlockCapture(s32 arg0) {
    data_020e9270 &= ~arg0;
}
