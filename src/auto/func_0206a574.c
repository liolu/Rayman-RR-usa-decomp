#include "m2c.h"

void func_0206a7a8(void);
s32 func_0206b3c4(s32);
void func_0207ac90(s32);
void func_0207ad9c(s32, u8, s32, s32, s32, s32, s32, s32);
extern u8 data_020bd280;

void func_0206a574(u8 *arg0, u32 arg1) {
    if (arg0 == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xE, -1, 0xFF, 0xFF, 0);
    }
    if (*(s32 *) (arg0 + 0x20) == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xF, -1, 0xFF, 0xFF, 0);
    }
    switch (arg1) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            if (func_0206b3c4(*(s32 *) (arg0 + 4)) == 0) {
                return;
            }
            func_0206b3c4(*(s32 *) (arg0 + 4));
            func_0206a7a8();
            return;
        default:
            return;
    }
}
