#include "m2c.h"

M2C_UNK func_02053134(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02053160(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02059ef8();                                /* extern */
M2C_UNK func_02073b80();                            /* extern */
extern M2C_UNK data_020bd034;
extern s32 data_020dbfcc;
extern s32 data_020dc19c;

void func_0205a844(void) {
    s32 temp_r1;

    func_02073b80();
    if (data_020dbfcc != 0) {
        temp_r1       = data_020dbfcc - 1;
        data_020dbfcc = temp_r1;
        if (temp_r1 == 0) {
            func_02053160(1, 3);
            func_02053134(1, 3);
        }
    }
    M2C_FIELD(&data_020bd034, M2C_UNK(**)(), 0x18)();
    if (func_02059ef8() != 0) {
        return;
    }
    M2C_FIELD(&data_020bd034, M2C_UNK(**)(), 0x1C)();
    if (data_020dc19c == 2) {
        return;
    }
    M2C_FIELD(&data_020bd034, M2C_UNK(**)(), 0x20)();
    M2C_FIELD(&data_020bd034, M2C_UNK(**)(), 0x14)();
}
