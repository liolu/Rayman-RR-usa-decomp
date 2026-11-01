#include "m2c.h"

void *func_02054084(s16, s16);

void func_02054010(void *arg0, s16 *arg1, s16 arg2, s16 arg3) {
    s16 *flags;
    s16 temp_lr;
    s16 i;

    temp_lr = *(s16 *) ((u8 *) arg0 + 0x38);
    i       = 0;
    if (temp_lr > 0) {
        flags = *(s16 **) ((u8 *) arg0 + 0xC);
        do {
            if (flags[i] == 0) {
                break;
            }
            i = i + 1;
        } while (temp_lr > i);
    }
    if (i == temp_lr) {
        return;
    }
    flags                                 = *(s16 **) ((u8 *) arg0 + 0xC);
    flags[i]                              = 1;
    *arg1                                 = i;
    (*(void ***) ((u8 *) arg0 + 0x10))[i] = func_02054084(arg2, arg3);
}
