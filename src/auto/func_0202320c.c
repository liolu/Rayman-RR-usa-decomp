#include "m2c.h"
extern s32 data_020bc23c[];
extern s32 func_02024118(s32 *v);
extern s32 func_02024178(s32 p, s32 *v);
extern s32 func_020223fc(s32 a, s32 b);
s32 func_0202320c(s32 *arg0, s32 arg1, s32 *arg2, s32 arg3) {
    s32 vec[3];
    s32 n;
    s32 r6;
    s32 p = arg1;
    s32 q = arg3;
    if (data_020bc23c[0] != 0) {
        vec[0] = (arg0[0] - arg2[0]) >> 8;
        vec[1] = (arg0[1] - arg2[1]) >> 8;
        vec[2] = (arg0[2] - arg2[2]) >> 8;
        n      = func_02024118(vec);
        if (n == 0) {
            return 0x10000;
        }
        if (n > 0x400000) {
            return 0x10000;
        }
        r6 = n * data_020bc23c[0];
        return func_020223fc(r6 - func_02024178(p, vec), r6 - func_02024178(q, vec));
    }
    return 0x10000;
}
