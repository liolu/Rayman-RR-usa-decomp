#include "m2c.h"

void func_020670a4(u32 arg0, void *arg1, s32 arg2) {
    switch (arg0) {
        case 0:
            *(s32 *) ((u8 *) arg1 + 0x30) = arg2;
            return;
        case 3:
            *(s32 *) ((u8 *) arg1 + 0x3C) = arg2;
            return;
        case 2:
            *(s32 *) ((u8 *) arg1 + 0x34) = arg2;
            return;
        case 1:
            *(s32 *) ((u8 *) arg1 + 0x38) = arg2;
            return;
    }
}
