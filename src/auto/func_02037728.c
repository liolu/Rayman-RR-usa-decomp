#include "m2c.h"

s32 func_01ff8878(s32);
s32 func_01ff88b4(s32);
void func_0202c664(void *);
void func_0202d1e8(void *, void *, void *);
void func_0202d434(void *, void *, s32);
void func_0202d964(void *, void *, void *, void *);
void func_0202e19c(void *, void *);
void func_0202e1e0(void *, void *);

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

typedef struct {
    s32 v[25];
} MatBig;

void func_02037728(void *arg0, s32 arg1) {
    Vec3 dir;
    Vec3 saved;
    Vec3 r1;
    Vec3 r2;
    Vec3 r3;
    MatBig big;
    s32 c;
    s32 s;

    if (M2C_FIELD(arg0, s32 *, 0xC) & 0x80) {
        return;
    }
    if (arg1 == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 8) & 8) {
        s = func_01ff88b4(arg1);
        c = func_01ff8878(arg1);
        func_0202e1e0((s8 *) arg0 + 0xDC, &saved);
        func_0202c664(&big);
        r1.x = s;
        r1.y = c;
        r1.z = 0;
        r2.x = -c;
        r2.y = s;
        r2.z = 0;
        r3.x = 0;
        r3.y = 0;
        r3.z = 0x1000;
        func_0202d964(&big, &r1, &r2, &r3);
        func_0202d1e8((s8 *) arg0 + 0xDC, &big, (s8 *) arg0 + 0xDC);
        func_0202e19c((s8 *) arg0 + 0xDC, &saved);
        return;
    }
    func_0202e1e0((s8 *) arg0 + 0xDC, &saved);
    dir.x = 0;
    dir.y = 0;
    dir.z = -0x1000;
    func_0202d434((s8 *) arg0 + 0xDC, &dir, arg1);
    func_0202e19c((s8 *) arg0 + 0xDC, &saved);
}
