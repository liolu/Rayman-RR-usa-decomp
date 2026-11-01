/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

extern void *func_020413b4(s32 arg0, void *arg1);
extern u32 func_02085574(void *arg0, u32 arg1);
extern void func_020534f4(void);
extern u32 func_0208529c(void);
extern u8 *func_0204141c(s32 arg0, void *arg1, u32 arg2, s32 arg3);
extern u32 func_02086d48(u32 arg0, void *arg1);
extern u32 func_02087054(u32 arg0);
extern void func_02041da8(void *arg0);

void *func_02086c74(void *arg0, u32 *arg1) {
    u8 *r4;
    u32 *r5;

    if (arg1 == 0) {
        func_020534f4();
    }
    r4 = (u8 *) func_020413b4(3, arg0);
    if (r4 != 0) {
        arg1[0] = (u32) r4;
        if (*(u32 *) (r4 + 8) != 0) {
            arg1[3] = func_02085574(r4 + 8, *(u32 *) (*(u8 **) (r4 + 8) + 8));
        }
        return r4;
    }
    r5      = (u32 *) func_0208529c();
    arg1[0] = (u32) r5;
    r4      = func_0204141c(3, arg0, (u32) r5, 0x10);
    if (*(u16 *) r4 != 0xFFFF) {
        r5[2] = func_02086d48(*(u16 *) r4, arg1);
    }
    if (*(u16 *) (r4 + 2) != 0xFFFF) {
        r5[0] = func_02087054(*(u16 *) (r4 + 2));
    }
    if (*(u16 *) (r4 + 4) != 0xFFFF) {
        r5[1] = func_02087054(*(u16 *) (r4 + 4));
    }
    func_02041da8(r4);
    return r5;
}
