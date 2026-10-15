#include "m2c.h"

s32 FX_Div(s32, s32);
M2C_UNK func_0202c664(void *);
void *func_0205488c(M2C_UNK);

void func_02048530(void **arg0, s32 arg1) {
    u32 temp_r0_2;
    void *temp_r0;
    void *temp_r1;
    void *temp_r2;

    temp_r0 = func_0205488c(0xE8);
    *arg0   = temp_r0;
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 8) = arg1;
    func_0202c664(*arg0 + 0xC);
    temp_r2   = *arg0;
    temp_r0_2 = M2C_FIELD(temp_r2, s32 *, 8) - 0x64;
    switch (temp_r0_2) {
        default:
            break;
        case 0:
        case 1:
            M2C_FIELD(temp_r2, s32 *, 0x70) = 0x1000;
            M2C_FIELD(*arg0, s32 *, 0x74)   = 0x1000;
            break;
        case 2:
        case 3:
            M2C_FIELD(temp_r2, s32 *, 0x70) = 0xC91;
            M2C_FIELD(*arg0, s32 *, 0x74)   = 0xC91;
            break;
    }
    M2C_FIELD(*arg0, s32 *, 0x78) = 0x200;
    M2C_FIELD(*arg0, s32 *, 0x7C) = 0x3E8000;
    temp_r1                       = *arg0;
    M2C_FIELD(*arg0, s32 *, 0xE4) = FX_Div(M2C_FIELD(temp_r1, s32 *, 0x74), M2C_FIELD(temp_r1, s32 *, 0x70));
}
