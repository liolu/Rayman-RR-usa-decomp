/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Vec3s;

void func_0204a950(void *arg0);

void func_0204a174(void *arg0, Vec3s v) {
    *(Vec3s *) ((u8 *) arg0 + 0x2C) = v;
    func_0204a950(arg0);
}
