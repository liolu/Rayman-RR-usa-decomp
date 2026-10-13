#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} T12;

s32 func_02066cb0(s32);                             /* extern */
void func_02066cb8(T12 *, s32, s16);                /* extern */
s32 func_02066d28(s32, s32);                        /* extern */
void *func_02084450(M2C_UNK, void *, void *);       /* extern */
s32 func_02093198(s32);                             /* extern */
M2C_UNK func_0209c740(s32, M2C_UNK, void **);       /* extern */

void *func_02096a00(M2C_UNK arg0, void *arg1, void *arg2) {
    T12 sp4;
    void *sp0;
    s32 temp_r4;
    s32 var_r5;
    s32 temp_r6;
    s32 var_r0;
    void *var_r8;

    var_r8  = arg1;
    temp_r4 = M2C_FIELD(var_r8, s32 *, -8);
    var_r5  = 0;
    func_0209c740(func_02093198(temp_r4), arg0, &sp0);
    temp_r6 = M2C_FIELD(M2C_FIELD(sp0, void **, 4), s32 *, 0x14);
    switch (temp_r4) {                              /* irregular */
        case 0x87:
            if (temp_r6 != 0) {
                var_r5 = func_02066cb0(temp_r6);
            }
            M2C_FIELD(arg2, s32 *, 0)   = var_r5;
            M2C_FIELD(arg2, s32 *, 0xC) = 6;
            break;
        case 0x88: {
            s16 sp8;
            var_r8 = func_02084450(arg0, var_r8, arg2);
            sp8    = (s16) M2C_FIELD(arg2, s32 *, 0);
            if (temp_r6 != 0) {
                func_02066cb8(&sp4, temp_r6, sp8);
                *(T12 *) arg2 = sp4;
            } else {
                M2C_FIELD(arg2, s32 *, 0) = 0;
                M2C_FIELD(arg2, s32 *, 4) = 0;
                M2C_FIELD(arg2, s32 *, 8) = 0;
            }
            M2C_FIELD(arg2, s32 *, 0xC) = 0x15;
            break;
        }
        case 0x89: {
            s16 sp8;
            var_r8 = func_02084450(arg0, var_r8, arg2);
            sp8    = (s16) M2C_FIELD(arg2, s32 *, 0);
            if (temp_r6 == 0) {
                var_r0 = 0;
            } else {
                var_r0 = func_02066d28(temp_r6, sp8);
            }
            M2C_FIELD(arg2, s32 *, 0)   = var_r0;
            M2C_FIELD(arg2, s32 *, 0xC) = 8;
            break;
        }
    }
    return var_r8;
}
