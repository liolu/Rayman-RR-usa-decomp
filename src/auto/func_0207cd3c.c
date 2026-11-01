#include "m2c.h"
s32 func_0207cd3c(void *arg0) {
    s16 i;
    s16 *types;
    s16 temp_ip;

    temp_ip = M2C_FIELD(arg0, s16 *, 0x38);
    i       = 0;
    if (temp_ip > 0) {
        types = M2C_FIELD(arg0, s16 **, 0xC);
        do {
            switch (types[i]) {
                case 1:
                    if (M2C_FIELD(arg0, s16 ***, 0x10)[i][2] > 0) {
                        return 0;
                    }
                    break;
                case 8:
                    if (M2C_FIELD(arg0, s16 ***, 0x10)[i][2] > 0) {
                        return 0;
                    }
                    break;
                default:
                    break;
            }
            i = i + 1;
        } while (temp_ip > i);
    }
    return 1;
}
