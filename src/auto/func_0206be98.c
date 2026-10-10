#define M2C_SELF_func_0206be98
#include "m2c_protos.h"

M2C_UNK func_020650d4(void *, u8);                  /* extern */
M2C_UNK func_0206defc(void *, s16);                 /* extern */

void func_0206be98(void *arg0) {
    void *temp_r4;

    temp_r4 = *M2C_FIELD(arg0, void ***, 4);
    if (M2C_FIELD(temp_r4, u8 *, 0xDA) != 0) {
        return;
    }
    func_020650d4(temp_r4, (u8) func_0205e9e0(M2C_FIELD(temp_r4, void **, 4)));
    func_0206defc(arg0, (s16) (M2C_FIELD(temp_r4, u16 *, 0x80) + 1));
}
