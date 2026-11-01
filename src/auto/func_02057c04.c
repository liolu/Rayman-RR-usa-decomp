#include "m2c.h"

s32 func_0201bdd0(s32 *);
void *func_0201becc(s32);
void *func_0201c120(s32);
s32 *func_0201c2b8(s32 *);
void func_02026748(s32, s32);
void func_02058d88(s32);
void func_0205b6a4(s32 *);
void func_0205fad8(s32);
void func_02067484();
void func_0206a7a8(s32);
void func_0206d968(s32, void *);
void memset(void *, s32, s32);
extern s32 data_020dc098;
extern s32 data_020dcee8;

void func_02057c04(s32 arg0) {
    void *temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 *var_r5;
    s32 *var_r7;

    temp_r5 = arg0 - 0x10000;
    temp_r6 = (temp_r5 * 0x3C) + M2C_FIELD(&data_020dc098, s32 *, 0x10);
    func_0205fad8(temp_r6);
    func_02026748(temp_r6, data_020dcee8);
    temp_r4                                                           = M2C_FIELD(temp_r6, void **, 4);
    *(s32 *) (M2C_FIELD(&data_020dc098, s32 *, 0x18) + (temp_r5 * 4)) = 0;
    func_0206a7a8(temp_r6);
    M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), s32 *, 0) = -1;
    M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), s32 *, 4) = 0x10000;
    func_0206d968(temp_r6, M2C_FIELD(temp_r6, void **, 4));
    func_02058d88(M2C_FIELD(temp_r4, s32 *, 0) + 0xBC);
    if (M2C_FIELD(temp_r4, s32 *, 8) != 0) {
        func_02067484();
    }
    func_0201c120(temp_r6);
    if (M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r6, void **, 4), void **, 4), u8 *, 0x24) != 0) {
        var_r7 = M2C_FIELD(temp_r6, s32 **, 8);
        var_r5 = func_0201c2b8(var_r7);
        if (func_0201bdd0(var_r7) != 0) {
            do {
                if (*var_r7 == 2) {
                    func_0205b6a4(var_r7);
                }
                var_r7 = var_r5;
                var_r5 = func_0201c2b8(var_r5);
            } while (func_0201bdd0(var_r7) != 0);
        }
    }
    if ((u8) (M2C_FIELD(temp_r6, s32 *, 0x30) & 0x20) != 0) {
        func_0201becc(temp_r6);
    }
    memset(temp_r4, 0, 0x2C);
}
