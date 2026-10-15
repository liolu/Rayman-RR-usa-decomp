#include "m2c.h"

s32 func_02040464(u16);
s32 func_020413b4(M2C_UNK, M2C_UNK);
void *func_0204141c(M2C_UNK, M2C_UNK, s32, M2C_UNK);
M2C_UNK func_02041da8(void *);
s32 func_02048260();
M2C_UNK func_020482a8(s32, s32);
M2C_UNK func_020482b8(s32, s32);
M2C_UNK func_020482c8(s32);
M2C_UNK func_020482d8(s32, s32);
s32 func_020484cc(u16);
s32 func_0204b3d0(u16);

s32 func_02048404(M2C_UNK arg0) {
    u32 temp_r0;
    u32 temp_r0_2;
    void *temp_r0_3;
    u16 temp_r0_4;
    u16 temp_r0_5;
    u16 temp_r0_6;

    temp_r0_2 = func_020413b4(0x20, arg0);
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    temp_r0   = func_02048260();
    temp_r0_3 = func_0204141c(0x20, arg0, temp_r0, 8);
    temp_r0_4 = M2C_FIELD(temp_r0_3, u16 *, 0);
    if (temp_r0_4 != 0xFFFF) {
        func_020482a8(temp_r0, func_0204b3d0(temp_r0_4));
    }
    temp_r0_5 = M2C_FIELD(temp_r0_3, u16 *, 2);
    if (temp_r0_5 != 0xFFFF) {
        func_020482b8(temp_r0, func_02040464(temp_r0_5));
    }
    temp_r0_6 = M2C_FIELD(temp_r0_3, u16 *, 4);
    if (temp_r0_6 != 0xFFFF) {
        func_020482d8(temp_r0, func_020484cc(temp_r0_6));
    }
    if (M2C_FIELD(temp_r0_3, u16 *, 6) != 0xFFFF) {
        func_020482c8(temp_r0);
    }
    func_02041da8(temp_r0_3);
    return temp_r0;
}
