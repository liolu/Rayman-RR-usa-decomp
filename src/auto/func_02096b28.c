#include "m2c.h"

M2C_UNK func_0202dc64(s32, M2C_UNK *, void **, M2C_UNK *); /* extern */
s32 func_02093198(s32);                             /* extern */
M2C_UNK func_0209c740(s32, M2C_UNK, void **);       /* extern */

void *func_02096b28(M2C_UNK arg0, void *arg1, void *arg2) {
    M2C_UNK spC;
    void *sp8;
    M2C_UNK sp4;
    void *sp0;

    func_0209c740(func_02093198(M2C_FIELD(arg1, s32 *, -8)), arg0, &sp0);
    func_0202dc64(M2C_FIELD(sp0, s32 *, 0x24), &spC, &sp8, &sp4);
    M2C_FIELD(arg2, s32 *, 0)   = (s32) (0 - M2C_FIELD(sp8, s32 *, 0));
    M2C_FIELD(arg2, s32 *, 4)   = (s32) (0 - M2C_FIELD(sp8, s32 *, 4));
    M2C_FIELD(arg2, s32 *, 8)   = (s32) (0 - M2C_FIELD(sp8, s32 *, 8));
    M2C_FIELD(arg2, s32 *, 0xC) = 0x15;
    return arg1;
}
