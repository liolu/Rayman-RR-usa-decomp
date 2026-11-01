#include "m2c.h"

void func_02066fe0(u32 arg0, void *arg1, s32 arg2) {
    switch (arg0) {
        case 0:
            *(s32 *) ((u8 *) arg1 + 0x20) = arg2;
            return;
        case 3:
            *(s32 *) ((u8 *) arg1 + 0x28) = arg2;
            return;
        case 2:
            *(s32 *) ((u8 *) arg1 + 0x24) = arg2;
            return;
        case 1:
            *(s32 *) ((u8 *) arg1 + 0x2C) = arg2;
            return;
    }
}
