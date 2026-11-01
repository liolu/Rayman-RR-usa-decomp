#include "m2c.h"

void *func_020414ac(s32, s32, s32);                 /* extern */
void func_02040d2c(void);                           /* extern */
void func_02062634(s32);                            /* extern */
void func_02040dd8(void);                           /* extern */
void func_02041da8(void *);                         /* extern */
void func_0205724c(void);                           /* extern */

void func_0206249c(void) {
    void *var_r4;
    void *var_r5;
    s32 var_r6;

    var_r4 = func_020414ac(0x91, 0, 4);
    if (M2C_FIELD(var_r4, u16 *, 0) != 0xFFFF) {
        var_r5 = func_020414ac(0x35, M2C_FIELD(var_r4, u16 *, 0), M2C_FIELD(var_r4, u16 *, 2) * 2);
        func_02040d2c();
        var_r6 = 0;
        if ((s32) M2C_FIELD(var_r4, u16 *, 2) > 0) {
            do {
                func_02062634(((u16 *) var_r5)[var_r6]);
                var_r6 += 1;
            } while (var_r6 < (s32) M2C_FIELD(var_r4, u16 *, 2));
        }
        func_02040dd8();
        func_02041da8(var_r5);
    }
    func_02041da8(var_r4);
    func_0205724c();
}
