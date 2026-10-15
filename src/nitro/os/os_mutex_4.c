/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void OS_InitMutex(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4)   = 0;
    M2C_FIELD(arg0, s32 *, 0)   = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8)   = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
