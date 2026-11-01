#include "m2c.h"

void *func_0205488c(s32);

void func_02055908(void **arg0, s32 arg1, s16 arg2) {
    s16 i;
    void *temp_r4;
    s32 temp_r6;

    temp_r4                           = func_0205488c(0x40);
    M2C_FIELD(temp_r4, s16 *, 0x38)   = arg2;
    M2C_FIELD(temp_r4, s16 *, 0x36)   = arg1;
    M2C_FIELD(temp_r4, void **, 0xC)  = func_0205488c(arg2 * 2);
    M2C_FIELD(temp_r4, void **, 0x10) = func_0205488c(arg2 * 4);
    temp_r6                           = arg1 * 12;
    M2C_FIELD(temp_r4, void **, 0)    = func_0205488c(temp_r6);
    M2C_FIELD(temp_r4, void **, 4)    = func_0205488c(temp_r6);
    *arg0                             = temp_r4;
    i                                 = 0;
    if (arg2 > 0) {
        do {
            ((s16 *) M2C_FIELD(temp_r4, void **, 0xC))[i] = 0;
            i++;
        } while (arg2 > i);
    }
    M2C_FIELD(temp_r4, s32 *, 0x14) = 0;
    M2C_FIELD(temp_r4, s16 *, 0x3C) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x20) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x24) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x28) = 0x1000;
    M2C_FIELD(temp_r4, s32 *, 0x2C) = 0x1000;
    M2C_FIELD(temp_r4, s16 *, 0x34) = 0;
}
