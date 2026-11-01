#include "m2c.h"

void *func_0205fcc0();
void func_0202d090(s32);
void func_0202dc18(s32, void *, void *, void *);
void *func_02001588(void *, void *, s32);
void func_0202d964(void *, void *, void *, void *);
void func_0202c91c(void *, void *);
void func_02048cd8(void *, void *);
void func_02048d28(void *, s32 *, s32 *);
void func_02048d04(void *, s32, s32);
void func_02048d3c(s32, s32, void *);
void func_020485e4(s32, s32, void *);

void func_0205fe54(void) {
    s32 sp4;
    s32 vC[3];
    s32 sp0;
    s32 vB[3];
    s32 vA[3];
    u8 buf[100];
    void *temp_r0;
    void *temp_r5;
    void *temp_r4;
    s32 temp_r6;
    s32 var_r1;
    void *temp_r2;

    temp_r0 = func_0205fcc0();
    temp_r5 = M2C_FIELD(temp_r0, void **, 0);
    temp_r6 = M2C_FIELD(temp_r5, s32 *, 0x24);
    func_0202d090(temp_r6);
    func_0202dc18(temp_r6, vC, vB, vA);
    func_02001588(buf, (void *) temp_r6, 0x64);
    vB[0] = 0 - vB[0];
    vB[1] = 0 - vB[1];
    vB[2] = 0 - vB[2];
    func_0202d964(buf, vC, vA, vB);
    func_0202c91c(buf, buf);
    temp_r4 = M2C_FIELD(temp_r0, void **, 8);
    func_02048cd8(temp_r4, buf);
    func_02048d28(temp_r4, &sp4, &sp0);
    temp_r2 = M2C_FIELD(M2C_FIELD(temp_r5, void **, 4), void **, 0x10);
    var_r1  = M2C_FIELD(M2C_FIELD(temp_r2, void **, 0xC), s32 *, 0x5C);
    if (var_r1 == 0) {
        var_r1 = M2C_FIELD(M2C_FIELD(temp_r2, void **, 4), s32 *, 0x5C);
    }
    if (var_r1 != sp4) {
        func_02048d04(temp_r4, var_r1, sp0);
        func_02048d3c(0, 0, temp_r4);
        func_020485e4(0, 0, temp_r4);
        return;
    }
    func_02048d3c(0, 0, temp_r4);
}
