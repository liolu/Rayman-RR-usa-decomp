#include "m2c.h"

s32 VEC_DotProduct(void *, void *);                 /* extern */

s32 func_02030c40(void *arg0, void *arg1) {
    s32 vec[3];
    s32 dot;
    s32 lim;

    vec[0] = 0;
    vec[1] = 0;
    vec[2] = 0x1000;
    dot    = VEC_DotProduct(arg1, vec);
    lim    = M2C_FIELD(arg0, s32 *, 0x18);
    if (dot > -lim && dot < lim) {
        return 1;
    }
    return 0;
}
