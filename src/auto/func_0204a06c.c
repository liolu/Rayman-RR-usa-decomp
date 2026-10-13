#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
    s32 f3;
} M2C_S16;

void func_0204a06c(void *arg0, void *arg1) {
    void *temp_r0;

    temp_r0                        = arg0 + 0x74;
    *(M2C_S16 *) ((s8 *) arg1 + 0) = *(M2C_S16 *) ((s8 *) arg0 + 116);
}
