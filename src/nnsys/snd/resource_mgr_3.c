/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 sAlarmLock;

s32 NNS_SndAllocAlarm(void) {
    s32 var_r0;
    s32 var_r3;

    var_r3 = 1;
    var_r0 = 0;
loop_1:
    if (!(sAlarmLock & var_r3)) {
        sAlarmLock |= var_r3;
        return var_r0;
    }
    var_r0 += 1;
    var_r3 *= 2;
    if (var_r0 >= 8) {
        return -1;
    }
    goto loop_1;
}
