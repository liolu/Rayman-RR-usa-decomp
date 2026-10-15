#include "m2c.h"

M2C_UNK func_0201c390(M2C_UNK);
M2C_UNK func_0202b970(M2C_UNK);
M2C_UNK func_02058200(s32);
M2C_UNK func_02058378();
M2C_UNK func_02058384();
M2C_UNK func_02058438();
M2C_UNK func_02058444();
s32 func_0205845c();
M2C_UNK func_02058acc();
M2C_UNK func_02059198();
M2C_UNK func_0205cd9c();
M2C_UNK func_0205df78();
M2C_UNK func_0205f9f8();
M2C_UNK func_020729fc();
M2C_UNK func_02082784();
extern s32 data_020dc19c;

void func_0205c748(void) {
    s32 temp_r4;

    temp_r4 = data_020dc19c;
    func_02058acc();
    func_020729fc();
    func_02059198();
    func_0201c390(0);
    if (func_0205845c() != 0) {
        func_02058438();
        func_02058384();
        func_02058444();
    } else {
        func_02058378();
        func_02058384();
    }
    func_0205df78();
    func_0202b970(1);
    func_02058200(5);
    func_0205cd9c();
    func_02058200(temp_r4);
    func_02082784();
    func_0205f9f8();
}
