#include "m2c.h"

s32 VEC_DotProduct(s32 *, s32 *);
void func_01ff84a0(s32 *, s32 *);
void func_020317f8(s32 *, s32);

void func_0203ce08(s32 *obj, s32 arg) {
    s32 d[3];
    s32 out[3];
    s32 dot;
    s64 p0;

    if (obj[118] == 0 && obj[119] == 0 && obj[120] == 0) {
        return;
    }
    d[0] = obj[56] - obj[31];
    d[1] = obj[57] - obj[32];
    d[2] = obj[58] - obj[33];
    dot  = VEC_DotProduct(d, &obj[118]);
    func_01ff84a0(out, &obj[118]);
    p0      = (s64) dot * out[0] + 0x800;
    out[0]  = (s32) (p0 >> 12);
    p0      = (s64) dot * out[1] + 0x800;
    out[1]  = (s32) (p0 >> 12);
    p0      = (s64) dot * out[2] + 0x800;
    out[2]  = (s32) (p0 >> 12);
    d[0]    = d[0] - out[0];
    d[1]    = d[1] - out[1];
    d[2]    = d[2] - out[2];
    obj[56] = obj[31] + d[0];
    obj[57] = obj[32] + d[1];
    obj[58] = obj[33] + d[2];
    func_020317f8(obj, arg);
}
