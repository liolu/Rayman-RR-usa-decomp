#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} Quad;

s32 func_02075478(void *, s32, void *, void *, s32);
s32 func_0207578c(void *, void *);
extern Quad data_020bb9fc;
extern u32 data_020be64c;

void func_02076218(void *arg0, void *arg1, void *arg2) {
    s32 sp4;
    Quad arr;
    s32 idx;

    arr = data_020bb9fc;
    idx = func_0207578c(&data_020be64c, &sp4);
    func_02075478(arg0, (s32) ((s32 *) &arr)[idx] + 0x1b, arg1, arg2, 0);
}
