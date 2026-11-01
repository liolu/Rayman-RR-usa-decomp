#include "m2c.h"

void func_02058d88(s32);
s32 func_0206b3c4(s32);
void func_0206d968(s32, void *);
void func_0207ac90(s32);
void func_0207ad9c(s32, u8, s32, s32, s32, s32, s32, s32);
extern u8 data_020bd280;

void func_02064f68(u8 *arg0, s32 arg1) {
    if (arg0 == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xE, -1, 0xFF, 0xFF, 0);
    }
    if (*(s32 *) arg0 == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xF, -1, 0xFF, 0xFF, 0);
    }
    switch (arg1) {
        case 1:
            func_0206d968(func_0206b3c4(*(s32 *) (arg0 + 4)), arg0);
            func_02058d88(*(s32 *) arg0 + 0xBC);
            return;
        case 2:
        case 4:
        default:
            return;
    }
}
