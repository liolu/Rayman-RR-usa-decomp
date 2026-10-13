#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} T;

M2C_UNK func_0204a174(s32, T);                      /* extern */
s32 func_020680d8();                                /* extern */

void func_02068198(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    T t;

    t.a = arg1;
    t.b = arg2;
    t.c = arg3;
    func_0204a174(func_020680d8(), t);
}
