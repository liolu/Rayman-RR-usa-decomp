#include "m2c.h"

void *func_02067900(s32);

void *func_0205c3f8(u8 *arg0) {
    u8 *temp_r0;
    u8 *temp_r2;
    u8 *var_r0;

    if (*(s32 *) (*(u8 **) (arg0 + 4) + 8) == 0) {
        return 0;
    }
    temp_r0 = func_02067900(*(s32 *) (*(u8 **) (arg0 + 4) + 8));
    if (temp_r0 == 0) {
        return 0;
    }
    temp_r2 = *(u8 **) (temp_r0 + 360);
    if (temp_r2 == 0) {
        return 0;
    }
    var_r0 = *(u8 **) (temp_r2 + 164);
    while (var_r0 != 0 && *(s32 *) var_r0 != 2) {
        var_r0 = *(u8 **) (var_r0 + 28);
    }
    if (var_r0 == 0) {
        return var_r0;
    }
    if (*(s32 *) (*(u8 **) (var_r0 + 4) + 4) == 0) {
        var_r0                   = 0;
        *(u8 **) (temp_r2 + 164) = 0;
    }
    return var_r0;
}
