#include "m2c.h"

void func_0204d980(void *, void *, void *, void *, s32, void *, s32, s32);

typedef struct {
    s32 a0;
    s32 a4;
    s32 a8;
    s32 pad0C;
    s32 a10;
    s32 a14;
    s32 a18;
    s32 pad1C;
    s32 a20;
    s32 a24;
    s32 a28;
    s32 pad2C;
    s32 a30;
    s32 a34;
    s32 a38;
} Obj3C;

void func_0204dd08(s32 arg0, s32 *arg1, s32 *arg2, Obj3C *arg3, s32 *arg4, s32 arg5, s32 arg6, u8 arg7) {
    s32 *ip;
    s32 *lr;

    if (arg0 == 0) {
        return;
    }
    ip        = arg4;
    arg3->a0  = 0x1000;
    arg3->a4  = 0;
    arg3->a8  = 0;
    arg3->a10 = 0;
    arg3->a14 = 0x1000;
    arg3->a18 = 0;
    arg3->a20 = 0;
    arg3->a24 = 0;
    arg3->a28 = 0x1000;
    if (ip != NULL) {
        arg3->a30 -= ip[0];
        arg3->a34 += ip[1];
        arg3->a38 -= ip[2];
    }
    func_0204d980(arg0, arg1, arg2, arg3, ip, arg5, arg6, arg7);
}
