#include "m2c.h"

extern void *func_0206984c(void);
extern void *func_0206b3c4(void *);
extern s32 func_02067900(void *);
extern s32 FX_Div(s32, s32);
extern u8 data_020dc19c[];

s32 func_02069a5c(void) {
    s32 r4;
    u8 *p;
    u8 *t;
    s64 prod;
    s32 div;

    r4 = 0;
    p  = func_0206984c();
    if (p != NULL) {
        t = func_0206b3c4(*(void **) (p + 4));
        if (*(void **) (*(u8 **) (t + 4) + 8) == NULL) {
            return 0;
        }
        r4 = func_02067900(*(void **) (*(u8 **) (t + 4) + 8));
        if (r4 == 0) {
            return 0;
        }
        if (*(s32 *) r4 != 0) {
            r4 = *(s32 *) (r4 + 0x44);
        } else {
            div  = FX_Div(0x3e8000, *(s32 *) (data_020dc19c + 0xbc) << 12);
            prod = (s64) * (s32 *) (*(u8 **) (r4 + 0x168) + 0x100) * (s64) div + 0x800;
            r4   = (s32) (prod >> 12);
        }
    }
    if (r4 > 0x7d00000) {
        r4 = 0x7d00000;
    }
    if (r4 < -0x7d00000) {
        r4 = -0x7d00000;
    }
    return r4 << 4;
}
