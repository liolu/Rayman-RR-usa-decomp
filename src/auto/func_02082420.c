#include "m2c.h"

void func_02082420(s32 arg0, u8 *arg1, s32 arg2) {
    u8 *temp_r1;
    u8 *temp_r3;

    temp_r1 = *(u8 **) (arg1 + 4);
    temp_r1 = *(u8 **) (temp_r1 + 0xC);
    temp_r3 = *(u8 **) temp_r1;
    if (*(temp_r3 + 0x10) != 0) {
        temp_r1 = *(u8 **) (temp_r3 + 4);
    } else {
        temp_r1 = *(u8 **) (temp_r3 + 8);
    }
    *(s32 *) (*(u8 **) (temp_r1 + 0x10) + arg0 * 0xC) = arg2;
}
