#include "m2c.h"

s32 func_01ff8878(void *);
s32 func_01ff88b4(void *);
void func_0202c664(void *);
void func_0202d1e8(void *, void *, void *);
void func_0202d964(void *, s32 *, s32 *, s32 *);

void func_020600e0(void *arg0, void *arg1) {
    s32 obj[25];
    s32 a[3];
    s32 b[3];
    s32 c[3];
    s32 x;
    s32 y;
    s32 r1;

    func_0202c664(obj);
    x = func_01ff88b4(arg1);
    y = func_01ff8878(arg1);
    if (x >= 0) {
        r1 = x;
    } else {
        r1 = 0 - x;
    }
    if (r1 < 0x10) {
        x = 0;
    }
    if (y >= 0) {
        r1 = y;
    } else {
        r1 = 0 - y;
    }
    if (r1 < 0x10) {
        y = 0;
    }
    a[0] = x;
    a[1] = 0;
    a[2] = 0 - y;
    b[0] = 0;
    b[1] = 0x1000;
    b[2] = 0;
    c[0] = y;
    c[1] = 0;
    c[2] = x;
    func_0202d964(obj, a, b, c);
    func_0202d1e8(arg0, obj, arg0);
}
