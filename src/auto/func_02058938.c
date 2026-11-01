#include "m2c.h"

extern u8 data_020dc3a0[];
extern u8 data_020dc19c[];
void func_02048530(void *a, s32 b);
void func_02048d04(void *a, s32 b, s32 c);
void func_02048c8c(void *a, s32 b, s32 c);
void func_02048cac(void *a, void *b);
void func_0202e19c(void *a, s32 *b);
void func_0202d69c(void *a, s32 b);
void func_0202c664(void *a);
void func_0202d8f4(void *a, s32 b);
void func_0202d1e8(void *a, void *b, void *c);
void func_0202d090(void *a);
void func_02048cd8(void *a, void *b);

void func_02058938(void) {
    u8 obj[100];
    u8 out[100];
    s32 a[3];
    void *h;

    func_02048530(data_020dc3a0, 0x67);
    h = *(void **) (data_020dc19c + 0x204);
    func_02048d04(h, 0x1800, 0xc00);
    func_02048c8c(*(void **) (data_020dc19c + 0x204), 0x199, 0x3e8000);
    func_02048cac(*(void **) (data_020dc19c + 0x204), obj);
    a[2] = 0x5000;
    a[0] = 0;
    a[1] = 0;
    func_0202e19c(obj, a);
    func_0202d69c(obj, 0x1922);
    func_0202c664(out);
    func_0202d8f4(out, 0x3244);
    func_0202d1e8(obj, out, obj);
    func_0202d090(obj);
    func_02048cd8(*(void **) (data_020dc19c + 0x204), obj);
}
