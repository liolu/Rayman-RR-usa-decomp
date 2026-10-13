#include "m2c.h"

void func_020584f4(u32 *arg0, s32 arg1, s32 arg2) {
    if (arg1 == 0) {
        if (arg2 != 1) {
            *arg0 = 0;
            return;
        }
        *arg0 |= ~0;
        return;
    }
    if (arg1 == 2) {
        if (arg2 == 1) {
            *arg0 |= 1;
            return;
        }
        *arg0 &= ~1;
        return;
    }
    if (arg1 == 1) {
        if (arg2 == 1) {
            *arg0 |= 2;
            return;
        }
        *arg0 &= ~2;
        return;
    }
    if (arg1 == 3) {
        if (arg2 == 0) {
            *arg0 |= 0x8000;
            return;
        }
        *arg0 &= ~0x8000;
        return;
    }
    if (arg1 == 4) {
        if (arg2 == 1) {
            *arg0 |= 0x1000;
            return;
        }
        *arg0 &= ~0x1000;
        return;
    }
    if (arg1 == 5) {
        if (arg2 == 0) {
            *arg0 |= 4;
            return;
        }
        *arg0 &= ~4;
        return;
    }
    if (arg1 == 6) {
        if (arg2 == 0) {
            *arg0 |= 0x400000;
            return;
        }
        *arg0 &= ~0x400000;
        return;
    }
}
