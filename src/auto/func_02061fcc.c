#include "m2c.h"

M2C_UNK func_02040d48();
M2C_UNK func_02040dd8();
void *func_020413b4(M2C_UNK, M2C_UNK);
void *func_0204141c(M2C_UNK, M2C_UNK, void *, M2C_UNK);
M2C_UNK func_02041da8(void *);
void *func_0205703c(M2C_UNK);
M2C_UNK func_0205aa2c(void *, s32);
M2C_UNK func_0205aa3c(void *, s32);
M2C_UNK func_0205e664();
M2C_UNK func_020620ac(u16, void *);
s32 func_020623cc(u16);
s32 func_02063804(u16);

void *func_02061fcc(M2C_UNK arg0) {
    u16 temp_r0_3;
    u16 temp_r0_4;
    u16 temp_r0_5;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r5;

    temp_r0 = func_020413b4(4, arg0);
    if (temp_r0 != NULL) {
        return temp_r0;
    }
    temp_r5 = func_0205703c(0x30);
    func_0205e664();
    temp_r0_2 = func_0204141c(4, arg0, temp_r5, 8);
    temp_r0_4 = M2C_FIELD(temp_r0_2, u16 *, 2);
    if (temp_r0_4 != 0xFFFF) {
        func_0205aa3c(temp_r5, func_02063804(temp_r0_4));
    } else {
        func_0205aa3c(temp_r5, 0);
    }
    func_02040d48();
    temp_r0_3 = M2C_FIELD(temp_r0_2, u16 *, 0);
    if (temp_r0_3 != 0xFFFF) {
        func_020620ac(temp_r0_3, temp_r5);
    }
    func_02040dd8();
    temp_r0_5 = M2C_FIELD(temp_r0_2, u16 *, 4);
    if (temp_r0_5 != 0xFFFF) {
        func_0205aa2c(temp_r5, func_020623cc(temp_r0_5));
    } else {
        func_0205aa2c(temp_r5, 0);
    }
    M2C_FIELD(temp_r5, s32 *, 0x28) = (s32) M2C_FIELD(temp_r0_2, u16 *, 6);
    func_02041da8(temp_r0_2);
    return temp_r5;
}
