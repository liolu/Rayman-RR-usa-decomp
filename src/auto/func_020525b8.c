/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

void *func_0201a588(s32);
void *func_02001588(void *, void *, unsigned long);
void func_020521bc(s32, void *);
void *memset(void *, s32, s32);

extern s32 data_020dbb38[];

s32 func_020525b8(s16 arg0, void *arg1, s16 *arg2) {
    s16 var_r5;
    s32 temp_r6;
    void *temp_r0;

    temp_r6 = data_020dbb38[arg0];
    var_r5  = 0;
    for (;;) {
        if (*(s32 *) (temp_r6 + (var_r5 * 4) + 0x64) == 0) {
            break;
        }
        var_r5 += 1;
        if (var_r5 >= 2) {
            var_r5 = -1;
            break;
        }
    }
    temp_r0 = func_0201a588(0x74);
    if (temp_r0 == NULL) {
        *arg2 = -1;
        memset(arg1, 0xCC, 0x6C);
        return 0;
    }
    memset(temp_r0, 0, 0x74);
    func_02001588(temp_r0, arg1, 0x6C);
    func_020521bc(temp_r6, temp_r0);
    *(s32 *) ((u8 *) temp_r0 + 0)                          = *(s32 *) ((u8 *) temp_r0 + 8);
    *(s32 *) ((u8 *) temp_r0 + 4)                          = *(s32 *) ((u8 *) temp_r0 + 0xC);
    *(s32 *) ((u8 *) temp_r0 + 0x64)                       = 0;
    *(void **) (data_020dbb38[arg0] + (var_r5 * 4) + 0x64) = temp_r0;
    *arg2                                                  = var_r5 + (arg0 * 2);
    *(s16 *) ((u8 *) temp_r0 + 0x68)                       = arg0;
    *(s16 *) ((u8 *) temp_r0 + 0x6A)                       = *arg2;
    func_02001588(arg1, temp_r0, 0x6C);
    return 1;
}
