#include "m2c.h"

s32 func_01ff8814(s32, s32, s32, s32, s32, s32);

void func_0206f9ac(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg0, s32 *, 0) =
        func_01ff8814(M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg1, s32 *, 0xC),
                      M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg1, s32 *, 0x18), M2C_FIELD(arg2, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 4) =
        func_01ff8814(M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg1, s32 *, 0x10),
                      M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg1, s32 *, 0x1C), M2C_FIELD(arg2, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 8) =
        func_01ff8814(M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg1, s32 *, 0x14),
                      M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg1, s32 *, 0x20), M2C_FIELD(arg2, s32 *, 8));
}
