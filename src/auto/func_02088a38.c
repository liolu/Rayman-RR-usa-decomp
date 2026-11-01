#include "m2c.h"
M2C_UNK func_0202c8a4(void *, s32, s32);
M2C_UNK func_0202e1e0(s32, s32 *);

void func_02088a38(void *arg0, s32 *arg1) {
    s32 v[3];
    s32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_r5 != 0) {
        func_0202e1e0(M2C_FIELD(arg0, s32 *, 0x24), v);
        func_0202c8a4(arg1, M2C_FIELD(arg0, s32 *, 0x24), temp_r5);
        arg1[0] = arg1[0] + v[0];
        arg1[1] = arg1[1] + v[1];
        arg1[2] = arg1[2] + v[2];
        return;
    }
    func_0202e1e0(M2C_FIELD(arg0, s32 *, 0x24), arg1);
}
