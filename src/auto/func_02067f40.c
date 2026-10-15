#include "m2c.h"

M2C_UNK func_02001588(s32, s32, s32);
M2C_UNK func_0204a8bc(s32, s32);
s32 func_02067954();
s32 func_02067fb4(s32);
M2C_UNK func_02067fbc(s32, s32);
s32 func_020680d8(s32);
M2C_UNK func_020680e0(s32, s32);

void func_02067f40(void *arg0, void *arg1) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;

    temp_r4 = func_020680d8(M2C_FIELD(arg0, s32 *, 0x1C));
    temp_r5 = func_02067fb4(M2C_FIELD(arg0, s32 *, 0x1C));
    func_02001588(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg1, s32 *, 0x1C), func_02067954());
    func_020680e0(M2C_FIELD(arg0, s32 *, 0x1C), temp_r4);
    temp_r4_2 = func_020680d8(M2C_FIELD(arg0, s32 *, 0x1C));
    func_0204a8bc(temp_r4_2, func_020680d8(M2C_FIELD(arg1, s32 *, 0x1C)));
    func_02067fbc(M2C_FIELD(arg0, s32 *, 0x1C), temp_r5);
}
