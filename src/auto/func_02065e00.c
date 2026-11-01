#include "m2c.h"

void memset(void *, s32, s32);
void func_020663c0(void *, s32 *);
void func_020663f8(void *, s32 *);
void func_02066430(void *, s32 *);

void func_02065e00(u8 *arg0) {
    s32 v[3];

    if (*(s32 *) (*(u8 **) (arg0 + 12) + 104) == 0) {
        return;
    }
    memset(arg0 + 120, 0, 96);
    memset(arg0 + 216, 0, 96);
    memset(arg0 + 312, 0, 32);
    v[0] = 0;
    v[1] = -4096;
    v[2] = 0;
    func_020663c0(arg0, v);
    v[0] = -4096;
    v[1] = 0;
    v[2] = 0;
    func_020663f8(arg0, v);
    v[0] = 0;
    v[1] = 0;
    v[2] = -4096;
    func_02066430(arg0, v);
}
