#include "m2c.h"

void func_02040e34(void *, void *, s32);
s32 func_02041344(s32, s32);
void *func_02041d5c(s32, s32);
void func_02041da8(void *);

void func_02061bac(u16 arg0, u8 *arg1) {
    u16 buf[12];
    u16 *tmp;
    void *src;

    src           = (void *) func_02041344(0xA1, arg0);
    *(s32 *) arg1 = (s32) src;
    func_02040e34(buf, (void *) *(s32 *) arg1, 24);
    tmp                 = (u16 *) func_02041d5c(0x200, 4);
    *(s32 *) (arg1 + 4) = func_02041344(0xA0, buf[4]);
    func_02040e34(tmp, (void *) *(s32 *) (arg1 + 4), buf[3] * 2);
    *(s32 *) (arg1 + 8)  = func_02041344(0x15, tmp[0]);
    *(s32 *) (arg1 + 12) = func_02041344(0x9F, buf[2]);
    func_02041da8(tmp);
}
