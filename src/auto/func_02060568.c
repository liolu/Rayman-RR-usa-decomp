#include "m2c.h"

void *func_02066df8(s32, void *);
void func_02066fe0(s32, s32, s32);

void func_02060568(void *arg0) {
    s32 *temp_r0_2;
    s32 *temp_r0_3;
    s32 *temp_r0_4;
    s32 *temp_r0_5;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r6;
    void *temp_r0;
    void *temp_r2;

    temp_r0 = M2C_FIELD(arg0, void **, 4);
    temp_r4 = M2C_FIELD(temp_r0, s32 *, 0x14);
    if (temp_r4 == 0) {
        return;
    }
    temp_r2   = M2C_FIELD(temp_r0, void **, 0);
    temp_r3   = M2C_FIELD(temp_r2, s32 *, 4) - M2C_FIELD(M2C_FIELD(temp_r2, void **, 0x14), s32 *, 0x10);
    temp_r6   = (s32) ((temp_r3 + ((u32) (temp_r3 >> 4) >> 0x1B)) << 0xB) >> 0x10;
    temp_r0_2 = func_02066df8(0, arg0);
    if (temp_r0_2 != NULL) {
        func_02066fe0(0, temp_r4, *(s32 *) ((u8 *) *(void **) temp_r0_2 + temp_r6 * 4));
    } else {
        func_02066fe0(0, temp_r4, 0);
    }
    temp_r0_3 = func_02066df8(2, arg0);
    if (temp_r0_3 != NULL) {
        func_02066fe0(2, temp_r4, *(s32 *) ((u8 *) *(void **) temp_r0_3 + temp_r6 * 4));
    } else {
        func_02066fe0(2, temp_r4, 0);
    }
    temp_r0_4 = func_02066df8(3, arg0);
    if (temp_r0_4 != NULL) {
        func_02066fe0(3, temp_r4, *(s32 *) ((u8 *) *(void **) temp_r0_4 + temp_r6 * 4));
    } else {
        func_02066fe0(3, temp_r4, 0);
    }
    temp_r0_5 = func_02066df8(1, arg0);
    if (temp_r0_5 != NULL) {
        func_02066fe0(1, temp_r4, *(s32 *) ((u8 *) *(void **) temp_r0_5 + temp_r6 * 4));
        return;
    }
    func_02066fe0(1, temp_r4, 0);
}
