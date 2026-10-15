#include "m2c.h"

M2C_UNK func_02032bdc(void *, s32);
M2C_UNK func_02032cdc(void *, s32);
M2C_UNK func_02032e54(void *);
s32 func_02035ea0();
M2C_UNK func_0203b0c0(void *, M2C_UNK, M2C_UNK);
extern M2C_UNK data_020cf98c;
extern s32 data_020cf994;

void func_02035f6c(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 var_r10;

    if ((M2C_FIELD(arg0, s32 *, 0xC) & 0x04000000) || (M2C_FIELD(&data_020cf98c, s32 *, 4) == 0)) {
        func_0203b0c0(arg0, arg1, arg2);
        return;
    }
    temp_r0 = func_02035ea0(arg0, arg1, arg2);
    func_02032bdc(arg0, temp_r0);
    func_0203b0c0(arg0, arg1, arg2);
    var_r10 = 1;
    if (temp_r0 > 1) {
        do {
            data_020cf994 = 0;
            func_02032e54(arg0);
            func_0203b0c0(arg0, arg1, arg2);
            var_r10 += 1;
        } while (var_r10 < temp_r0);
    }
    func_02032cdc(arg0, temp_r0);
}
