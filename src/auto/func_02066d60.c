#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void func_02066d60(s32 arg0, s16 arg1, void *arg2) {
    if (arg1 < 0) {
        return;
    }
    if (arg1 >= 2) {
        return;
    }
    *(M2C_S12 *) ((s8 *) arg0 + 0x44 + arg1 * 0xC) = *(M2C_S12 *) arg2;
}
