#include "m2c.h"

s32 func_02082450(s32 arg0, u8 *arg1) {
    u8 *temp_r1;
    u8 *temp_r2;

    temp_r1 = *(u8 **) (arg1 + 4);
    temp_r1 = *(u8 **) (temp_r1 + 0xC);
    temp_r2 = *(u8 **) temp_r1;
    if (*(temp_r2 + 0x10) != 0) {
        temp_r1 = *(u8 **) (temp_r2 + 4);
    } else {
        temp_r1 = *(u8 **) (temp_r2 + 8);
    }
    return *(s32 *) (*(u8 **) (temp_r1 + 0x10) + arg0 * 0xC);
}
