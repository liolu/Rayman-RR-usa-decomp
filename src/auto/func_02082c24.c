#include "m2c.h"

M2C_UNK func_0202b788(M2C_UNK, M2C_UNK);
M2C_UNK func_0202b7b0(M2C_UNK, M2C_UNK);
M2C_UNK func_0202b7d8(M2C_UNK, M2C_UNK);
M2C_UNK func_0202b800(M2C_UNK, M2C_UNK);
M2C_UNK func_0202b944(M2C_UNK, s32, M2C_UNK);
s32 func_02083314(s32, M2C_UNK);

void func_02082c24(M2C_UNK arg0, u32 arg1, M2C_UNK arg2) {
    s32 temp_r0;
    u32 temp_r3;

    temp_r3 = arg1 - 8;
    switch (temp_r3) {
        case 0:
        case 1:
        case 4:
        case 5:
        case 7:
            func_0202b800(arg0, arg2);
            return;
        case 2:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
            break;
        default:
            temp_r0 = func_02083314(arg1, 0);
            switch (temp_r0) {
                case 1:
                    func_0202b788(arg0, arg2);
                    return;
                case 2:
                    func_0202b7b0(arg0, arg2);
                    return;
                case 4:
                    func_0202b7d8(arg0, arg2);
                    return;
                default:
                    func_0202b944(arg0, temp_r0, arg2);
                    return;
            }
    }
}
