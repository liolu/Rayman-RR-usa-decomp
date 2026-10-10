#include "engine.h"
#include "m2c.h"

M2C_UNK func_020414ac(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02041da8(M2C_UNK);
void func_020634c4(M2C_UNK);

void func_02063488(s32 arg0) {
    u16 *temp_r0;
    u16 temp_r0_2;

    temp_r0   = (u16 *) func_020414ac(0x90, arg0, 2);
    temp_r0_2 = *temp_r0;
    if (temp_r0_2 != 0xFFFF) {
        func_020634c4((s32) temp_r0_2);
    }
    func_02041da8((s32) temp_r0);
}
