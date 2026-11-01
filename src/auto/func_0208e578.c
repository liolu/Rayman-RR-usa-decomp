#include "m2c.h"

extern s32 func_01ff8668(s32 *);
extern void func_01ff84a0(s32 *, s32 *);
extern void func_0208e200(s32, s32 *, s32 *, s32, s32, s16);
extern s32 data_020dd7a4[];

void func_0208e578(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 v[3];
    s32 t;
    s32 r6;
    s64 p0;
    s64 p1;
    s64 p2;

    v[0] = arg2[0] - arg1[0];
    v[1] = arg2[1] - arg1[1];
    v[2] = arg2[2] - arg1[2];
    r6   = func_01ff8668(v);
    func_01ff84a0(v, v);
    t    = r6 + 0x599;
    p0   = (s64) t * v[0] + 0x800;
    v[0] = (s32) (p0 >> 12);
    p1   = (s64) t * v[1] + 0x800;
    v[1] = (s32) (p1 >> 12);
    p2   = (s64) t * v[2] + 0x800;
    v[2] = (s32) (p2 >> 12);
    v[0] = v[0] + arg1[0];
    v[1] = v[1] + arg1[1];
    v[2] = v[2] + arg1[2];
    func_0208e200(arg0, arg1, v, data_020dd7a4[0], data_020dd7a4[1], *(s16 *) ((u8 *) data_020dd7a4 + 0x40));
}
