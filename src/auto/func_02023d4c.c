#include "engine.h"
#include "m2c.h"

s32 func_0201d264(M2C_UNK, M2C_UNK);
s32 func_0201d2e8(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0201d3cc(M2C_UNK, M2C_UNK);

void func_02023d4c(void *arg0, void *arg1) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r5;

    if (arg1 == NULL) {
        var_r5 = 0;
    } else {
        var_r5 = ((M2C_FIELD(arg1, s32 *, 0x24) - 2) * 8) + 0x48;
    }
    if (var_r5 != 0) {
        if (var_r5 != M2C_FIELD(arg0, s32 *, 0x4C)) {
            temp_r1 = M2C_FIELD(arg0, s32 *, 0x48);
            if (temp_r1 != 0) {
                M2C_FIELD(arg0, s32 *, 0x48) = func_0201d2e8(0, temp_r1, var_r5);
            } else {
                M2C_FIELD(arg0, s32 *, 0x48) = func_0201d264(0, var_r5);
            }
        }
        M2C_FIELD(arg0, s32 *, 0x4C) = var_r5;
        func_02001588((void *) M2C_FIELD(arg0, s32 *, 0x48), arg1, (u32) var_r5);
        return;
    }
    temp_r1_2 = M2C_FIELD(arg0, s32 *, 0x48);
    if (temp_r1_2 == 0) {
        return;
    }
    func_0201d3cc(0, temp_r1_2);
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
}
