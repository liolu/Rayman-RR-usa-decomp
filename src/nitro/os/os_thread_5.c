#include "m2c.h"

M2C_UNK OS_WakeupThreadDirect(void *);

void OSi_SleepAlarmCallback(void **arg0) {
    void *temp_r2;

    temp_r2                         = *arg0;
    *arg0                           = NULL;
    M2C_FIELD(temp_r2, s32 *, 0xB0) = 0;
    OS_WakeupThreadDirect(temp_r2);
}
