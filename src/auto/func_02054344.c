#include "m2c.h"

s32 func_02054344(u8 *arg0, s32 arg1, s16 arg2) {
    u8 **tbl = *(u8 ***) (arg0 + 0x10);
    s32 base = *(s32 *) tbl[arg1];
    return *(s32 *) (base + (s16) arg2 * (s16) 12 + 4);
}
