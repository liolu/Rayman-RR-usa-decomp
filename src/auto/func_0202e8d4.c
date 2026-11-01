#include "m2c.h"

M2C_UNK func_0202f068(s32);                         /* extern */
extern s32 data_020bc540;
extern s32 data_020cf6b8;

void func_0202e8d4(void) {
    s32 var_r4;
    s32 var_r5;

    var_r4 = 0;
    if ((s32) data_020bc540 < 0) {
        return;
    }
    var_r5 = 0;
    do {
        if (*(u8 *) (data_020cf6b8 + var_r5) == 2) {
            func_0202f068(data_020cf6b8 + var_r5);
            if (var_r4 == data_020bc540) {
                data_020bc540 -= 1;
            }
        }
        var_r4 += 1;
        var_r5 += 0x7C;
    } while (var_r4 <= (s32) data_020bc540);
}