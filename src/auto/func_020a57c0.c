#include "m2c.h"

extern s32 func_02084450(void *, s32, s32 *);
extern void func_02059e54(s32, s32, s32);

s32 func_020a57c0(void *arg0, s32 arg1) {
    s32 buf[4];
    s32 r1;
    s32 r2;
    s32 r3;
    s32 a;
    s32 b;
    s32 c;

    r1 = func_02084450(arg0, arg1, buf);
    if (buf[3] == 8) {
        a = buf[0];
    } else {
        a = buf[0] << 12;
    }
    r2 = func_02084450(arg0, r1, buf);
    if (buf[3] == 8) {
        b = buf[0];
    } else {
        b = buf[0] << 12;
    }
    r3 = func_02084450(arg0, r2, buf);
    if (buf[3] == 8) {
        c = buf[0];
    } else {
        c = buf[0] << 12;
    }
    func_02059e54(a, b, c);
    return r3;
}
