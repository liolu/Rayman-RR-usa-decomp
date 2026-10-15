#include "m2c.h"

void OS_SetThreadDestructor(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xB4) = arg1;
}
