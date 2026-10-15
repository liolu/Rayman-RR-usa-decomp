#include "m2c.h"

M2C_UNK func_0200bdb8(u16, u16);
s32 func_0200be90();
M2C_UNK func_0200be98();
s32 func_0200c0e4(M2C_UNK);
M2C_UNK OS_WakeupThreadDirect(M2C_UNK *);
M2C_UNK func_0200ce50(M2C_UNK *, M2C_UNK *, M2C_UNK, s32, s32, s32);
M2C_UNK OS_InitThread();
M2C_UNK OS_InitAlarm();
M2C_UNK func_02025cd0(M2C_UNK *);
M2C_UNK func_02030b78(M2C_UNK);
M2C_UNK func_02048330();
M2C_UNK func_020587c0();
M2C_UNK func_0205a8dc();
M2C_UNK func_0205cc20();
M2C_UNK func_02061bac(s32, M2C_UNK *);
u8 func_0207ab84();
extern s32 data_020bbfb8;
extern u8 data_020bc544;
extern s32 data_020bc570;
extern s32 data_020bc574;
extern u8 data_020be854;
extern M2C_UNK data_020c0adc;
extern M2C_UNK data_020c0aec;
extern M2C_UNK data_020c0afc;
extern s32 data_020c0b0c;
extern M2C_UNK data_020c0b14;
extern s8 data_020d00d0;
extern M2C_UNK func_0200beb0;

void func_0200bf4c(void) {
    M2C_UNK sp8;

    data_020d00d0 = 1;
    data_020bc570 = 0x100;
    data_020bc574 = 0xC0;
    OS_InitAlarm();
    OS_InitThread();
    if (data_020bbfb8 != 0) {
        data_020c0b0c = func_0200c0e4(0x400);
        func_02061bac(0x8004, &data_020c0adc);
        func_02061bac(0x8001, &data_020c0aec);
        func_02061bac(0x8003, &data_020c0afc);
        func_0200ce50(&data_020c0b14, &func_0200beb0, 0, data_020c0b0c + 0x400, 0x400, 0xA);
        OS_WakeupThreadDirect(&data_020c0b14);
    }
    data_020bc570 = 0x100;
    data_020bc574 = 0xC0;
    if (data_020be854 == 0xFF) {
        data_020be854 = func_0207ab84();
    }
    if (data_020bc544 == 0xFF) {
        data_020bc544 = func_0207ab84();
    }
    func_02030b78(2);
    func_02025cd0(&sp8);
    if (func_0200be90() == 0) {
        return;
    }
    func_02048330();
    func_0205cc20();
    func_0200bdb8((u16) data_020bc570, (u16) data_020bc574);
    func_020587c0();
    func_0205a8dc();
    func_0200be98();
}
