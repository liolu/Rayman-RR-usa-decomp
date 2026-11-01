#include "m2c.h"

s32 func_02084450(M2C_UNK, s32, s32 *);             /* extern */
void func_02048eb0(s32 *);                          /* extern */

s32 func_020a4d84(M2C_UNK arg0, s32 arg1) {
    s32 sp[4];
    s64 p0;
    s64 p1;
    s64 p2;
    s32 temp_r4;

    temp_r4 = func_02084450(arg0, arg1, &sp[0]);
    p0      = (s64) sp[0] * 0x199 + 0x800;
    sp[0]   = (s32) (p0 >> 0xC);
    p1      = (s64) sp[1] * 0x199 + 0x800;
    sp[1]   = (s32) (p1 >> 0xC);
    p2      = (s64) sp[2] * 0x199 + 0x800;
    sp[2]   = (s32) (p2 >> 0xC);
    func_02048eb0(&sp[0]);
    return temp_r4;
}
