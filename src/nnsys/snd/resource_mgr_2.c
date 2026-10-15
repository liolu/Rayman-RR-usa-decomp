#include "m2c.h"

extern s32 sAlarmLock;

void NNS_SndFreeAlarm(s32 arg0) {
    sAlarmLock &= ~(1 << arg0);
}
