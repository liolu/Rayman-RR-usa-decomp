#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3i;

void func_0202dc80(void *, Vec3i *, Vec3i *, Vec3i *);   /* extern */

void func_02031c40(void *arg0, void *arg1) {
    Vec3i a;
    Vec3i b;
    Vec3i c;

    a.x = M2C_FIELD(arg0, s32 *, 0x48);
    a.y = 0;
    a.z = 0;
    b.x = 0;
    b.y = M2C_FIELD(arg0, s32 *, 0x4C);
    b.z = 0;
    c.x = 0;
    c.y = 0;
    c.z = M2C_FIELD(arg0, s32 *, 0x50);
    func_0202dc80(arg1, &a, &b, &c);
}
