#include "m2c.h"

M2C_UNK func_0201a62c(void **);
M2C_UNK func_02057038(void *, M2C_UNK, M2C_UNK *, M2C_UNK, s32);
M2C_UNK func_02057154(void *);
void *func_02067900();
M2C_UNK func_02067908(M2C_UNK, M2C_UNK);
extern M2C_UNK data_020bd308;
extern M2C_UNK data_020bd310;

void func_02067484(M2C_UNK arg0) {
    void *sp4;
    s32 temp_r1;
    void *temp_r0;

    temp_r0 = func_02067900();
    sp4     = temp_r0;
    if (temp_r0 == NULL) {
        return;
    }
    temp_r1 = M2C_FIELD(temp_r0, s32 *, 0xC);
    if (temp_r1 & 0x40000) {
        if (temp_r1 & 0x4000) {
            func_0201a62c(temp_r0 + 0x168);
        }
        func_0201a62c(&sp4);
    } else {
        if (temp_r1 & 0x4000) {
            func_02057038(M2C_FIELD(temp_r0, void **, 0x168), 2, &data_020bd308, 0xB7, 0);
            func_02057154(M2C_FIELD(sp4, void **, 0x168));
            M2C_FIELD(sp4, void **, 0x168) = NULL;
        }
        func_02057038(sp4, 2, &data_020bd310, 0xB8, 0);
        func_02057154(sp4);
        sp4 = NULL;
    }
    func_02067908(arg0, 0);
    sp4 = NULL;
}
