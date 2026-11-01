/* near start: 11 diffs with profile "2.0/sp1p5" */
#include "m2c.h"

extern void *func_020413b4(s32 arg0, void *arg1);
extern void *func_020606dc(void);
extern u8 *func_0204141c(s32 arg0, void *arg1, void *arg2, s32 arg3);
extern u32 *func_020414ac(s32 arg0, u32 arg1, u32 arg2);
extern u32 func_0205703c(u32 arg0);
extern void func_02063c78(u32 *arg0, u32 *arg1, u32 *arg2, u32 *arg3);
extern void func_02041da8(void *arg0);

void *func_02063b80(void *arg0, u32 *arg1) {
    u32 loc[2];
    u8 *r6;
    s32 r7;
    u32 *r8;
    u32 *r9;
    u32 *r11;
    u32 r4;
    void *r;

    r = func_020413b4(0xA, arg0);
    if (r != 0) {
        return r;
    }
    r9 = (u32 *) func_020606dc();
    r6 = func_0204141c(0xA, arg0, r9, 4);
    if (*(u16 *) r6 != 0xFFFF) {
        r11   = func_020414ac(0x58, *(u16 *) r6, *(u16 *) (r6 + 2) << 2);
        r4    = *(u32 *) (*(u32 *) (*(u32 *) arg1 + 0x14) + 0x14);
        r9[0] = func_0205703c(r4 << 2);
        r9[1] = r4;
        r7    = 0;
        if ((s32) * (u16 *) (r6 + 2) > 0) {
            r8 = r11;
            do {
                func_02063c78(&loc[1], r8, arg1, &loc[0]);
                ((u32 *) r9[0])[loc[0]] = loc[1];
                r7                      = r7 + 1;
                r8                      = r8 + 1;
            } while (r7 < *(u16 *) (r6 + 2));
        }
        func_02041da8(r11);
    }
    func_02041da8(r6);
    return r9;
}
