#include "m2c.h"

M2C_UNK func_02027358(s32, s32, s32);
void *func_02084450(M2C_UNK, void *, s32 *);
M2C_UNK func_02084ea0(M2C_UNK, M2C_UNK);
s32 func_020931d8(s32);
M2C_UNK func_0209c740(s32, M2C_UNK, s32 *);
extern s32 data_020dcee0;
extern s32 data_020dcee8;

void *func_020a43d0(M2C_UNK arg0, void *arg1) {
    s32 sp0;
    s32 sp4[4];
    s32 temp_r3;
    void *temp_r4;

    temp_r3 = M2C_FIELD(arg1, s32 *, -8);
    switch (temp_r3) {
        case 0x10A:
            func_0209c740(func_020931d8(temp_r3), arg0, &sp0);
            temp_r4 = func_02084450(arg0, arg1, sp4);
            func_02027358(sp0, data_020dcee8, sp4[0]);
            return temp_r4;
        case 0x10B:
            temp_r4 = func_02084450(arg0, arg1, sp4);
            func_02027358(-1, data_020dcee0, sp4[0]);
            return temp_r4;
        case 0x10C:
            temp_r4 = func_02084450(arg0, arg1, sp4);
            func_02027358(-1, data_020dcee8, sp4[0]);
            return temp_r4;
        default:
            func_02084ea0(0x27, 0);
            return arg1;
    }
}
