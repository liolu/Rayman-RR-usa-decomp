#include "m2c.h"

void func_020b1734(s32, s32, s32);                   /* extern */
void func_020b15dc(s32, s32, s32);                   /* extern */
void func_020b19e0(s32, s32, s32, s32);              /* extern */
void func_020b1ed8(s32, s32, s32, s32);              /* extern */
void func_020b1e88(s32, s32, s32);                   /* extern */

void func_020b1528(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    switch (arg0) {
        case 0:
            func_020b1734(arg2, arg1, *(s32 *) arg2);
            return;
        case 1:
            func_020b15dc(arg1, arg2, arg3);
            return;
        case 2:
            func_020b19e0(arg1, arg2, arg3, arg4);
            return;
        case 3:
            func_020b1ed8(arg1, arg2, arg3, arg4);
            return;
        case 4:
            func_020b1e88(arg1, arg2, arg3);
            return;
        default:
            return;
    }
}
