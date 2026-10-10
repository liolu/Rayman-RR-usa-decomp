#include "engine.h"
#include "m2c.h"

void func_020300d4(M2C_UNK, M2C_UNK);
void func_02030ac0(M2C_UNK, M2C_UNK, M2C_UNK);

extern u8 data_020bd364;

void func_0206b518(s32 arg0, s32 arg1) {
    func_02030ac0((s32) data_020bd364, (s32) (u8) arg0, 0);
    func_020300d4(arg1, 0);
}
