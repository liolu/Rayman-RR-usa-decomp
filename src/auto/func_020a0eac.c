#include "m2c.h"

s32 func_02084450(M2C_UNK, s32, s32 *);           /* extern */

s32 func_020a0eac(M2C_UNK arg0, s32 arg1) {
    s32 sp0[4];
    s32 v;
    void *obj;
    s32 shift;
    s32 val;

    v     = func_02084450(arg0, arg1, sp0);
    obj   = (void *) sp0[0];
    v     = func_02084450(arg0, v, sp0);
    shift = sp0[0];
    v     = func_02084450(arg0, v, sp0);
    val   = M2C_FIELD(obj, s32 *, 0x30);
    if (sp0[0] != 0) {
        val |= 1 << shift;
    } else {
        val &= ~(1 << shift);
    }
    M2C_FIELD(obj, s32 *, 0x30) = val;
    return v;
}
