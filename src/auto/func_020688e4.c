#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

s32 func_02048260();                                /* extern */
void func_020482a8(s32, s32 *);                     /* extern */
void func_0204c600(s32 **);                         /* extern */
void func_0204c6f4(s32 *, s32);                     /* extern */
void func_02054468(s32, s16 *, s32);                /* extern */
void func_02054520(s32, s16, s32, s32, s32);        /* extern */
void func_02054558(s32, s16, s32, s32);             /* extern */
void func_02054574(s32, s16, s32, s32);             /* extern */
void func_0205459c(s32, s16, s32, s32);             /* extern */
void func_02055908(s32 *, s32, s32);                /* extern */
void func_020559c8(s32, Vec3 *, s32);               /* extern */
void func_02056668(s32);                            /* extern */

s32 func_020688e4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    Vec3 pos;
    s32 spC;
    s32 *sp8;
    s16 sp4[2];
    s32 temp_r4;

    func_02055908(&spC, 2, 1);
    pos.x = arg0;
    pos.y = arg1;
    pos.z = arg2;
    func_020559c8(spC, &pos, 0);
    pos.x = arg0 - 0x199;
    pos.y = arg1;
    pos.z = arg2;
    func_020559c8(spC, &pos, 1);
    func_02054468(spC, sp4, 1);
    func_02054520(spC, sp4[0], 0, 1, 0);
    func_02054558(spC, sp4[0], 0, arg3);
    temp_r4 = func_02048260();
    func_0204c600(&sp8);
    func_020482a8(temp_r4, sp8);
    func_0204c6f4(sp8, 0x7FA);
    func_0205459c(spC, sp4[0], 0, temp_r4);
    func_02054574(spC, sp4[0], 0, (s32) sp8);
    func_02056668(spC);
    return spC;
}
