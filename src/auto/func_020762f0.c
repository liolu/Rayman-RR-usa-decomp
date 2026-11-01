#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} Quad;

s32 func_02075478(void *, s32, void *, void *, s32);
s32 func_0207578c(void *, void *);
extern Quad data_020bba20;
extern u32 data_020be684;

void func_020762f0(void *arg0, void *arg1, void *arg2) {
    s32 sp4;
    Quad arr;
    s32 idx;

    arr = data_020bba20;
    idx = func_0207578c(&data_020be684, &sp4);
    func_02075478(arg0, (s32) ((s32 *) &arr)[idx] + 0x22, arg1, arg2, 0);
}
