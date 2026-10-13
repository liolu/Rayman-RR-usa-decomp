#include "m2c.h"

M2C_UNK func_02084450(M2C_UNK, void *, s32 *);      /* extern */
s32 func_020931d8(s32);                             /* extern */
M2C_UNK func_0209c740(s32, M2C_UNK, M2C_UNK *);     /* extern */
extern s32 data_020bc550;

/* Local scratch record: the first call fills field 0, the virtual call
   (func_02084450) writes the s32 result into field 1 of the same record. */
typedef struct {
    M2C_UNK f0;
    s32 f1;
    s32 f2;
    s32 f3;
    s32 f4;
} S020a12c8;

s32 func_020a12c8(M2C_UNK arg0, void *arg1) {
    S020a12c8 sp0;
    s32 r;

    func_0209c740(func_020931d8(M2C_FIELD(arg1, s32 *, -8)), arg0, &sp0.f0);
    r             = func_02084450(arg0, arg1, &sp0.f1);
    data_020bc550 = sp0.f1;
    return r;
}
