#include "m2c.h"

void func_02054558(u8 *arg0, s32 arg1, s16 arg2, s32 arg3) {
    u8 **tbl                                    = *(u8 ***) (arg0 + 0x10);
    s32 base                                    = *(s32 *) tbl[arg1];
    *(s32 *) (base + (s16) arg2 * (s16) 12 + 4) = arg3;
}
