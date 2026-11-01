#include "m2c.h"

void func_02054520(void *arg0, s32 arg1, s16 arg2, s16 arg3, s16 arg4) {
    s32 temp_r4;

    temp_r4                                                                  = arg2 * 0xC;
    *(s16 *) (*(u8 **) (*(u8 ***) ((u8 *) arg0 + 0x10))[arg1] + temp_r4)     = arg3;
    *(s16 *) (*(u8 **) (*(u8 ***) ((u8 *) arg0 + 0x10))[arg1] + temp_r4 + 2) = arg4;
}
