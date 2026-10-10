#include "engine.h"
#include "m2c.h"

void func_020587e0(M2C_UNK);
void func_02058a28(void);

extern M2C_UNK data_020dc19c;

void func_020587c0(void) {
    M2C_FIELD(&data_020dc19c, s32 *, 0x204) = 0;
    func_020587e0(0);
    func_02058a28();
}
