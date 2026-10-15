#include "m2c.h"

M2C_UNK func_0201fc70();
M2C_UNK func_0201fc74();
extern M2C_UNK data_020c57b4;

s32 func_020274ec(void *arg0) {
    s32 temp_r4;

    func_0201fc70();
    M2C_FIELD(&data_020c57b4, void **, 0x10) = arg0;
    temp_r4                                  = M2C_FIELD(arg0, s32 *, 4);
    func_0201fc74();
    return temp_r4;
}
