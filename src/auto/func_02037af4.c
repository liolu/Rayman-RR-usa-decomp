#include "m2c.h"

s32 func_0201bdd0(void *);

void func_02037af4(void *arg0, s32 arg1) {
    if (func_0201bdd0(M2C_FIELD(arg0, void **, 0x29C)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x204) = arg1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x204) =
        (s32) (arg1 - M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x29C), void **, 0x24), s32 *, 0xC));
}
