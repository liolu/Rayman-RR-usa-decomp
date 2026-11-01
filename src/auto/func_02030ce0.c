#include "m2c.h"

s32 VEC_DotProduct(void *, void *);                 /* extern */

u8 func_02030ce0(void *arg0, void *arg1) {
    s32 vec[3];
    s32 dot;
    s32 lim;

    vec[0] = 0;
    vec[1] = 0;
    vec[2] = 0x1000;
    dot    = VEC_DotProduct((u8 *) arg1 + 4, vec);
    lim    = M2C_FIELD(arg0, s32 *, 0x18);
    return (u8) (dot <= -lim);
}
