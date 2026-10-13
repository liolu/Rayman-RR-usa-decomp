#include "m2c.h"

extern void *data_020c0a30;

void func_0200b568(void) {
    void *p;

    while ((p = data_020c0a30) != NULL) {
        data_020c0a30 = M2C_FIELD(p, void **, 0);
        M2C_FIELD(p, M2C_UNK(**)(s32, M2C_UNK), 4)(M2C_FIELD(p, s32 *, 8), -1);
    }
}
