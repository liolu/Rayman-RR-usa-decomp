#include "m2c.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Rec_020a527c;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} Out_020a527c;

s32 func_020482a0(s32);                                 /* extern */
void *func_02084450(s32, void *, Out_020a527c *);       /* extern */
void func_020b1528(s32, s32, Rec_020a527c *, Rec_020a527c *, Rec_020a527c *);

void *func_020a527c(s32 arg0, void *arg1) {
    Out_020a527c out;
    Rec_020a527c a;
    Rec_020a527c b;
    Rec_020a527c c;
    s32 ctx;
    s32 type;
    void *p;

    if (M2C_FIELD(arg1, s32 *, -8) == 0x14D) {
        p    = func_02084450(arg0, arg1, &out);
        type = out.unk0;
        p    = func_02084450(arg0, p, &out);
        ctx  = 0;
        if (out.unk0 != 0) {
            ctx = func_020482a0(out.unk0);
        }
        p      = func_02084450(arg0, p, &out);
        a.unk0 = out.unk0;
        a.unk4 = out.unk4;
        a.unk8 = out.unk8;
        p      = func_02084450(arg0, p, &out);
        b.unk0 = out.unk0;
        b.unk4 = out.unk4;
        b.unk8 = out.unk8;
        p      = func_02084450(arg0, p, &out);
        c.unk0 = out.unk0;
        c.unk4 = out.unk4;
        c.unk8 = out.unk8;
        func_020b1528(type, ctx, &a, &b, &c);
        return p;
    }
    return arg1;
}
