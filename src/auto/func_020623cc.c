#include "m2c.h"

void *func_020414ac(s32 a, s32 b, s32 c);
void func_02054608(s32 *p);
s32 func_0200a4bc(s32 a, s32 b);
s32 func_0200a3b8(s32 a);
void func_02054634(s32 a, s32 *b, s32 c);
void func_02041da8(void *p);

s32 func_020623cc(s32 arg0) {
    s32 buf[4];
    s32 *r4;
    s32 last;

    r4 = func_020414ac(0x6d, arg0, 0x10);
    func_02054608(buf);
    buf[1] = func_0200a3b8(func_0200a4bc(0x45800000, r4[0]));
    buf[2] = func_0200a3b8(func_0200a4bc(0x45800000, r4[1]));
    buf[3] = func_0200a3b8(func_0200a4bc(0x45800000, r4[2]));
    last   = func_0200a3b8(func_0200a4bc(0x45800000, r4[3]));
    func_02054634(buf[0], &buf[1], last);
    func_02041da8(r4);
    return buf[0];
}
