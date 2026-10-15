#include "m2c.h"

M2C_UNK func_0202b970(M2C_UNK);
M2C_UNK func_020573e8();
M2C_UNK func_02057e3c();
s32 func_02058404();
s32 func_02058410();
M2C_UNK func_020584d4(M2C_UNK, M2C_UNK);
M2C_UNK func_0205c864();
M2C_UNK func_0205df7c();
M2C_UNK func_0205dfd4();
M2C_UNK func_0205e188();
M2C_UNK func_0205fdc0();
M2C_UNK func_02061e10();
M2C_UNK func_02062824(s32, s32);
s32 func_02072e7c();
s32 func_02072eb8();
M2C_UNK func_0207af10();
extern s32 data_020dc19c;

void func_0205c7bc(void) {
    s32 temp_r4;
    s32 var_r4;

    func_020584d4(0, 1);
    func_0207af10();
    temp_r4 = func_02058404();
    func_02062824(temp_r4, func_02058410());
    func_020573e8();
    func_02057e3c();
    func_0205df7c();
    func_0205fdc0();
    func_0202b970(2);
    func_0205c864();
    if (data_020dc19c == 5) {
        var_r4 = 0;
        if (func_02072eb8() != 0) {
            func_0202b970(8);
            var_r4 = 1;
        }
        if (func_02072e7c() != 0) {
            func_0202b970(4);
            var_r4 = 1;
        }
        if (var_r4 != 0) {
            func_0205dfd4();
        }
    }
    func_02061e10();
    func_0205e188();
}
