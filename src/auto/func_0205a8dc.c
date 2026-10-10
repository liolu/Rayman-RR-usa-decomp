#include "m2c.h"

s32 func_02059ef8();                                /* extern */
s32 func_02059f14();                                /* extern */
M2C_UNK func_0205a008();                            /* extern */
M2C_UNK func_0205a62c();                            /* extern */
M2C_UNK func_0205a844();                            /* extern */
extern s32 data_020de208;

s32 func_0205a8dc(void) {
    if (func_02059ef8() == 0) {
    loop_2:
        func_0205a008();
        if (func_02059ef8() == 0) {
            data_020de208 = 1;
            if (func_02059f14() == 0) {
                do {
                    func_0205a844();
                } while (func_02059f14() == 0);
            }
            data_020de208 = 0;
            func_0205a62c();
            if (func_02059ef8() == 0) {
                goto loop_2;
            }
        }
    }
    return 0;
}
