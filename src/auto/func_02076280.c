#include "m2c.h"

typedef struct {
    s32 w[5];
} Blk;

extern M2C_UNK data_020bba0c;
extern M2C_UNK data_020be664;
s32 func_0207578c(M2C_UNK *, M2C_UNK *);
void func_02075478(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32);

void func_02076280(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 sp4;
    Blk tab;
    s32 idx;

    tab = *(Blk *) &data_020bba0c;
    idx = func_0207578c(&data_020be664, &sp4);
    func_02075478(arg0, tab.w[idx] + 0x1E, arg1, arg2, 0);
}
