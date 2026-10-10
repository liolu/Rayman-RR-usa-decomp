#include "engine.h"
#include "m2c.h"

s32 func_0201a588(M2C_UNK);
s32 func_0205703c(s32);
void func_02067908(s32 *, s32);

void func_0206730c(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r4;

    var_r4 = 0;
    if (arg3 != 0) {
        switch (arg1) {                             /* switch 1; irregular */
            case 0:                                     /* switch 1 */
                var_r4                                 = func_0201a588(0x16C);
                M2C_FIELD(var_r4, volatile s32 *, 0xC) = (s32) ((M2C_FIELD(var_r4, volatile s32 *, 0xC) & ~7) | 1);
                break;
            case 1:                                     /* switch 1 */
                var_r4                                 = func_0201a588(0x1F4);
                M2C_FIELD(var_r4, volatile s32 *, 0xC) = (s32) ((M2C_FIELD(var_r4, volatile s32 *, 0xC) & ~7) | 3);
                break;
            case 2:                                     /* switch 1 */
                var_r4                                 = func_0201a588(0x368);
                M2C_FIELD(var_r4, volatile s32 *, 0xC) = (s32) (M2C_FIELD(var_r4, volatile s32 *, 0xC) | 7);
                break;
        }
    } else {
        switch (arg1) {                             /* switch 2; irregular */
            case 0:                                     /* switch 2 */
                var_r4                                 = func_0205703c(0x16C);
                M2C_FIELD(var_r4, volatile s32 *, 0xC) = (s32) ((M2C_FIELD(var_r4, volatile s32 *, 0xC) & ~7) | 1);
                break;
            case 1:                                     /* switch 2 */
                var_r4                                 = func_0205703c(0x1F4);
                M2C_FIELD(var_r4, volatile s32 *, 0xC) = (s32) ((M2C_FIELD(var_r4, volatile s32 *, 0xC) & ~7) | 3);
                break;
            case 2:                                     /* switch 2 */
                var_r4                                 = func_0205703c(0x368);
                M2C_FIELD(var_r4, volatile s32 *, 0xC) = (s32) (M2C_FIELD(var_r4, volatile s32 *, 0xC) | 7);
                break;
        }
    }
    func_02067908(arg0, var_r4);
    temp_r0 = M2C_FIELD(var_r4, volatile s32 *, 0xC);
    if (arg3 != 0) {
        var_r0 = temp_r0 | 0x40000;
    } else {
        var_r0 = temp_r0 & ~0x40000;
    }
    M2C_FIELD(var_r4, volatile s32 *, 0xC) = var_r0;
    M2C_FIELD(var_r4, volatile s32 *, 0xC) = var_r0;
    if (arg2 != 0) {
        if (arg3 != 0) {
            M2C_FIELD(var_r4, volatile s32 *, 0x168) = func_0201a588(0x16C);
        } else {
            M2C_FIELD(var_r4, volatile s32 *, 0x168) = func_0205703c(0x16C);
        }
    } else {
        M2C_FIELD(var_r4, volatile s32 *, 0x168) = 0;
    }
    temp_r0_2 = M2C_FIELD(var_r4, volatile s32 *, 0xC);
    if (arg2 != 0) {
        var_r0_2 = temp_r0_2 | 0x4000;
    } else {
        var_r0_2 = temp_r0_2 & ~0x4000;
    }
    M2C_FIELD(var_r4, volatile s32 *, 0xC) = var_r0_2;
    M2C_FIELD(var_r4, volatile s32 *, 0xC) = var_r0_2;
}
