#include "m2c.h"

void func_02088f60(u8 *arg0, s32 *arg1) {
    s32 v0;
    s32 r0;
    s32 v1;
    s32 r1;
    s32 v2;
    s32 r2;
    s32 v3;
    s32 r3;

    v0 = arg0[0] << 0xC;
    if (v0 < 0) {
        r0 = 0;
    } else if (v0 > 0x64000) {
        r0 = 0x1000;
    } else {
        r0 = (s32) (((s64) v0 * 0x28 + 0x800) >> 12);
    }
    arg1[0] = r0;
    v1      = arg0[1] << 0xC;
    if (v1 < 0) {
        r1 = 0;
    } else if (v1 > 0x64000) {
        r1 = 0x1000;
    } else {
        r1 = (s32) (((s64) v1 * 0x28 + 0x800) >> 12);
    }
    arg1[1] = r1;
    v2      = arg0[2] << 0xC;
    if (v2 < 0) {
        r2 = 0;
    } else if (v2 > 0x64000) {
        r2 = 0x1000;
    } else {
        r2 = (s32) (((s64) v2 * 0x28 + 0x800) >> 12);
    }
    arg1[2] = r2;
    v3      = arg0[3] << 0xC;
    if (v3 < 0) {
        r3 = 0;
    } else if (v3 > 0x64000) {
        r3 = 0x1000;
    } else {
        r3 = (s32) (((s64) v3 * 0x28 + 0x800) >> 12);
    }
    arg1[3] = r3;
}
