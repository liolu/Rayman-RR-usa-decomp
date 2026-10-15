#include "m2c.h"

extern s32 data_020e9270;
extern s32 sAlarmLock;
extern s32 sChannelLock;

void NNSi_SndInitResourceMgr(void) {
    sChannelLock  = 0;
    data_020e9270 = 0;
    sAlarmLock    = 0;
}
