#include "m2c.h"

s32 func_02031e50(s32);
void func_0203ec68(void *, s32, s32, s32, s32, s32, s32);

void func_0203ef18(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r5;
    s32 temp_r10;
    s32 temp_r4;
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 8) & 0x400) {
        func_0203ec68(arg0, arg1, func_02031e50(M2C_FIELD(arg0, s32 *, 0x16C)), func_02031e50(M2C_FIELD(arg0, s32 *, 0x170)),
                      func_02031e50(M2C_FIELD(arg0, s32 *, 0x174)), arg2, arg3);
    }
    if (!(M2C_FIELD(arg0, s32 *, 8) & 0x20)) {
        return;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0xC) & 0x20000)) {
        return;
    }
    temp_r5  = func_02031e50(M2C_FIELD(arg0, s32 *, 0x18C));
    temp_r10 = func_02031e50(M2C_FIELD(arg0, s32 *, 0x180));
    temp_r4  = func_02031e50(M2C_FIELD(arg0, s32 *, 0x184));
    temp_r0  = func_02031e50(M2C_FIELD(arg0, s32 *, 0x188));
    func_0203ec68(arg0, arg1, (s32) (((s64) temp_r5 * temp_r10 + 0x800) >> 0xC),
                  (s32) (((s64) temp_r5 * temp_r4 + 0x800) >> 0xC), (s32) (((s64) temp_r5 * temp_r0 + 0x800) >> 0xC), arg2,
                  arg3);
}
