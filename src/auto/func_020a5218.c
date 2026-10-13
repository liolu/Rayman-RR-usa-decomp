#include "m2c.h"

M2C_UNK func_02084450(M2C_UNK, M2C_UNK, s32 *);     /* extern */
void *func_020a50d0(void *);                        /* extern */
extern void *data_020e4c64[];

typedef struct {
    u8 pad0[0x44];
    s32 count;
} Counter_020e4c1c;

extern Counter_020e4c1c data_020e4c1c;

void *func_020a5218(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0[4];
    void *res;
    s32 var_r4;

    func_02084450(arg0, arg1, sp0);
    var_r4 = sp0[0];
    if (var_r4 > data_020e4c1c.count - 1) {
        var_r4 = data_020e4c1c.count - 1;
    }
    res = func_020a50d0(data_020e4c64[data_020e4c1c.count - var_r4]);
    data_020e4c1c.count -= var_r4 + 1;
    return res;
}
