#include "m2c.h"

M2C_UNK func_0201a490(s32);
M2C_UNK func_0201a4ec(s32);
M2C_UNK func_0202affc(s32);
M2C_UNK func_0202b04c(s32);
M2C_UNK func_0202b0d4();
M2C_UNK func_0202b0e8();
M2C_UNK func_0202f9b0(M2C_UNK, u8, s32, s32, s32, s32, s32);
void *func_020414ac(M2C_UNK, u16, M2C_UNK);
M2C_UNK func_02041da8(void *);
M2C_UNK func_02044a70(s32);
M2C_UNK func_020546c4(M2C_UNK, s32);
M2C_UNK func_02054794(M2C_UNK);
M2C_UNK func_02057010();
M2C_UNK func_02057024();
s32 *func_0205703c(M2C_UNK);
M2C_UNK func_0206b54c(s32);
M2C_UNK func_02082800(s32);
M2C_UNK func_02082850(s32);
M2C_UNK func_020828f0();
M2C_UNK func_02082904();
extern u8 data_020bd280;
extern M2C_UNK data_020cf6cc;
extern s32 *data_020dd710;
extern s32 *data_020dd714;

void func_02063538(u16 arg0) {
    s32 *temp_r0_5;
    s32 *temp_r0_6;
    u16 temp_r0_2;
    void *temp_r0;
    void *temp_r0_3;
    void *temp_r0_4;

    temp_r0   = func_020414ac(0x8F, arg0, 4);
    temp_r0_2 = M2C_FIELD(temp_r0, u16 *, 2);
    if (temp_r0_2 != 0x92) {
        if (temp_r0_2 == 0x93) {
            temp_r0_3 = func_020414ac(0x93, M2C_FIELD(temp_r0, u16 *, 0), 0x18);
            func_02082850(M2C_FIELD(temp_r0_3, s32 *, 0));
            func_02082904();
            func_020546c4(1, M2C_FIELD(temp_r0_3, s32 *, 4));
            func_02054794(1);
            func_020546c4(3, M2C_FIELD(temp_r0_3, s32 *, 8));
            func_0202b04c(M2C_FIELD(temp_r0_3, s32 *, 0xC));
            func_0202b0e8();
            func_0202f9b0(1, data_020bd280, *((M2C_UNK *) ((s8 *) &data_020cf6cc + (data_020bd280 * 4))),
                          M2C_FIELD(temp_r0_3, s32 *, 0x14), 0x186A0, 4, 0xD);
            func_02057024();
            func_0201a4ec(M2C_FIELD(temp_r0_3, s32 *, 0x10));
            func_02041da8(temp_r0_3);
        }
    } else {
        temp_r0_4 = func_020414ac(0x92, M2C_FIELD(temp_r0, u16 *, 0), 0x20);
        func_0202f9b0(0, data_020bd280, *((M2C_UNK *) ((s8 *) &data_020cf6cc + (data_020bd280 * 4))),
                      M2C_FIELD(temp_r0_4, s32 *, 0x14), 0x186A0, 4, 0xD);
        func_02057010();
        func_0201a490(M2C_FIELD(temp_r0_4, s32 *, 0x10));
        func_02082800(M2C_FIELD(temp_r0_4, s32 *, 0));
        func_020828f0();
        func_020546c4(0, M2C_FIELD(temp_r0_4, s32 *, 4));
        func_02054794(0);
        func_020546c4(2, M2C_FIELD(temp_r0_4, s32 *, 8));
        func_02044a70(M2C_FIELD(temp_r0_4, s32 *, 0x1C));
        func_0206b54c(M2C_FIELD(temp_r0_4, s32 *, 0x18));
        func_0202affc(M2C_FIELD(temp_r0_4, s32 *, 0xC));
        func_0202b0d4();
        func_02041da8(temp_r0_4);
        temp_r0_5                             = func_0205703c(0xC);
        data_020dd714                         = temp_r0_5;
        *temp_r0_5                            = 0;
        M2C_FIELD(data_020dd714, s32 *, 4)    = 0;
        M2C_FIELD(data_020dd714, s32 *, 8)    = 0;
        temp_r0_6                             = func_0205703c(0x24);
        data_020dd710                         = temp_r0_6;
        *temp_r0_6                            = 0x1000;
        M2C_FIELD(data_020dd710, s32 *, 4)    = 0;
        M2C_FIELD(data_020dd710, s32 *, 8)    = 0;
        M2C_FIELD(data_020dd710, s32 *, 0xC)  = 0;
        M2C_FIELD(data_020dd710, s32 *, 0x10) = 0x1000;
        M2C_FIELD(data_020dd710, s32 *, 0x14) = 0;
        M2C_FIELD(data_020dd710, s32 *, 0x18) = 0;
        M2C_FIELD(data_020dd710, s32 *, 0x1C) = 0;
        M2C_FIELD(data_020dd710, s32 *, 0x20) = 0x1000;
    }
    func_02041da8(temp_r0);
}
