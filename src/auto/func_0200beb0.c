#include "m2c.h"

M2C_UNK func_0200c990(s32);
M2C_UNK OS_SleepThread(s32);
M2C_UNK func_0200ce24();
M2C_UNK func_02053160(M2C_UNK, M2C_UNK);
M2C_UNK func_02061c3c(M2C_UNK *);
extern s32 data_020bbfb8;
extern s32 data_020c0ad8;
extern M2C_UNK data_020c0adc;
extern M2C_UNK data_020c0aec;
extern s32 data_020c0b10;

void func_0200beb0(void) {
    if (data_020bbfb8 != 0) {
        func_02061c3c(&data_020c0adc);
        func_02053160(1, 3);
        func_0200c990(0x1388);
        func_02053160(0, 3);
        func_0200c990(0x320);
        func_02061c3c(&data_020c0aec);
        func_02053160(1, 3);
        func_0200c990(0x6D6);
        OS_SleepThread(data_020c0b10);
    }
    data_020c0ad8 = 1;
    func_0200ce24();
}
