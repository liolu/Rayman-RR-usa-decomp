#include "m2c.h"

s32 func_02083314(u32 arg0, s32 arg1) {
    switch (arg0) {
        case 16:
            return 4;
        case 17:
            return 4;
        case 0:
            return 1;
        case 1:
            return 1;
        case 2:
            return 1;
        case 3:
            return 2;
        case 4:
            return 2;
        case 5:
            return 4;
        case 6:
            return 4;
        case 7:
            return 4;
        case 8:
            return 4;
        case 9:
            return 4;
        case 14:
            return 4;
        case 10:
            return ((arg1 - 1) * 4) + 8;
        case 11:
            return 0xC;
        case 13:
            return 4;
        case 12:
            return 4;
        case 15:
            return 4;
        case 19:
            return ((arg1 * 3) << 2) + 8;
        case 18:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
            return ((arg1 - 1) * 4) + 0xC;
        default:
            return 0;
    }
}
