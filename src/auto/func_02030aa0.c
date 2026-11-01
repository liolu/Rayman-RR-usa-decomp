#include "m2c.h"

extern u8 data_020cf6cc[];

s32 func_02030aa0(s32 arg0) {
    u8 *temp = ((u8 **) data_020cf6cc)[(arg0 >> 8) & 0xFF];
    return *(s32 *) (temp + (u8) arg0 * 0x10);
}
