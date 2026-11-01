#include "m2c.h"

void func_01ff8a2c(s32 *dst, s32 k, s32 *src) {
    dst[0] = (s32) (((s64) k * src[0] + 0x80000) >> 20);
    dst[1] = (s32) (((s64) k * src[1] + 0x80000) >> 20);
    dst[2] = (s32) (((s64) k * src[2] + 0x80000) >> 20);
}
