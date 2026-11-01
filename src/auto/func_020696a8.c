#include "m2c.h"

s32 func_02069844(s32);
void func_02069f28(void *);
void func_0207ac90(s32);
void func_0207ad9c(s32, u8, s32, s32, s32, s32, s32, s32);
extern u8 data_020bd280;

void func_020696a8(u8 *arg0, u32 arg1) {
    if (arg0 == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xE, -1, 0xFF, 0xFF, 0);
    }
    if (*(s32 *) (arg0 + 0x24) == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xF, -1, 0xFF, 0xFF, 0);
    }
    switch (arg1) {
        case 1:
            if (func_02069844(*(s32 *) (arg0 + 0x24)) == 0) {
                return;
            }
            func_02069f28(arg0);
            return;
        case 0:
        case 2:
        case 3:
        case 4:
        case 5:
        default:
            return;
    }
}
