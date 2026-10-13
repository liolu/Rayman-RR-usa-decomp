#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void func_020559c8(s32 *arg0, void *arg1, s16 arg2) {
    void *temp_r3;

    temp_r3                           = *arg0 + (arg2 * 0xC);
    *(M2C_S12 *) ((s8 *) temp_r3 + 0) = *(M2C_S12 *) ((s8 *) arg1 + 0);
}
