/* MATCH with profile "2.0/sp1p5" */
#include "m2c.h"
extern u32 data_020c4a50[];
extern void func_0201e1b8(u32 key);
extern u32 func_0201daa4(u32 key);

u32 func_0201e130(void) {
    s32 i;
    u32 *e;

    i = 0;
    while (i < (s32) data_020c4a50[0]) {
        e = (u32 *) data_020c4a50[1] + i * 4;
        if (e[2] != 2) {
            if (e[2] == 3) {
                func_0201e1b8(e[0]);
                e[2] = 0;
            }
        } else {
            if (func_0201daa4(e[0]) == 0) {
                return 0;
            }
            e[2] = 1;
        }
        i++;
    }
    return 1;
}
