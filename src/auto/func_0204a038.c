#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
    s32 f3;
} M2C_S16;

void func_0204a038(void *arg0, void *arg1) {
    void *temp_ip;

    temp_ip                         = arg0 + 0x10;
    *(M2C_S16 *) ((s8 *) arg0 + 16) = *(M2C_S16 *) ((s8 *) arg1 + 0);
}
