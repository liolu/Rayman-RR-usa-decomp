#include "m2c.h"

M2C_UNK func_0201d43c(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0201facc(s32);                         /* extern */
M2C_UNK func_02024de4(s32);                         /* extern */
extern M2C_UNK data_020bc228;

void func_020221fc(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4);
    switch (temp_r1) {                              /* irregular */
        case 1:
            func_02024de4(M2C_FIELD(arg0, s32 *, 0));
            return;
        case 2:
            func_0201facc(M2C_FIELD(arg0, s32 *, 0));
            return;
        default:
            func_0201d43c(0x15, &data_020bc228);
            return;
    }
}
