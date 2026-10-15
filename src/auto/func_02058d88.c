#include "m2c.h"

M2C_UNK func_0201a62c(void ***);
M2C_UNK func_02058d30();

void func_02058d88(void ***arg0) {
    void **temp_r1;
    void **temp_r2_2;
    void *temp_r0;
    void *temp_r2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;

    temp_r1 = *arg0;
    if (temp_r1 == NULL) {
        return;
    }
    if ((s32) M2C_FIELD(temp_r1, s32 *, 8) > 0) {
        do {
            temp_r0 = M2C_FIELD(*arg0, void **, 0);
            temp_r2 = M2C_FIELD(temp_r0, void **, 0);
            if (temp_r2 != NULL) {
                M2C_FIELD(temp_r2, void ***, 4) = (void **) M2C_FIELD(temp_r0, void ***, 4);
            }
            temp_r2_2 = M2C_FIELD(temp_r0, void ***, 4);
            if (temp_r2_2 != NULL) {
                *temp_r2_2 = M2C_FIELD(temp_r0, void **, 0);
            }
            temp_r2_3 = M2C_FIELD(temp_r0, void **, 8);
            if (temp_r2_3 != NULL) {
                M2C_FIELD(temp_r2_3, s32 *, 8) = (s32) (M2C_FIELD(temp_r2_3, s32 *, 8) - 1);
                temp_r2_4                      = M2C_FIELD(temp_r0, void **, 8);
                if (M2C_FIELD(temp_r2_4, void **, 0) == temp_r0) {
                    M2C_FIELD(temp_r2_4, void **, 0) = (void *) M2C_FIELD(temp_r0, void **, 0);
                }
                temp_r2_5 = M2C_FIELD(temp_r0, void **, 8);
                if (M2C_FIELD(temp_r2_5, void ***, 4) == temp_r0) {
                    M2C_FIELD(temp_r2_5, void ***, 4) = (void **) M2C_FIELD(temp_r0, void ***, 4);
                }
            }
            M2C_FIELD(temp_r0, void **, 0)  = NULL;
            M2C_FIELD(temp_r0, void ***, 4) = NULL;
            M2C_FIELD(temp_r0, void **, 8)  = NULL;
            func_02058d30();
        } while ((s32) M2C_FIELD(*arg0, s32 *, 8) > 0);
    }
    func_0201a62c(arg0);
    *arg0 = NULL;
}
