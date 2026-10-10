#include "m2c.h"

s32 func_0202b174(M2C_UNK);                         /* extern */
void *func_0202b264(M2C_UNK *, M2C_UNK, s32);       /* extern */
extern M2C_UNK data_020c75bc;

void *func_0202b884(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r1;
    void *temp_r0;
    void *var_r4;

    var_r4  = NULL;
    temp_r0 = func_0202b264(&data_020c75bc, arg0, func_0202b174(arg1));
    if (temp_r0 != NULL) {
        temp_r1 = M2C_FIELD(temp_r0, u16 *, 0x10) & 0xFC00;
        switch (temp_r1) {                          /* irregular */
            case 0x1000:
                var_r4 = temp_r0 + 8;
                break;
            case 0x2000:
                var_r4 = temp_r0 + 8;
                break;
            case 0x3000:
                var_r4 = temp_r0 + 8;
                break;
            case 0x4000:
                var_r4 = temp_r0 + 8;
                break;
            case 0x7000:
                var_r4 = temp_r0 + 8;
                break;
            case 0x5000:
                var_r4 = M2C_FIELD(temp_r0, void **, 8);
                break;
            default:
                var_r4 = NULL;
                break;
        }
    }
    return var_r4;
}
