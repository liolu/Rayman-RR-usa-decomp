#include "m2c.h"

extern M2C_UNK data_020d0354;
extern M2C_UNK func_02048360;
extern M2C_UNK func_0204839c;
extern M2C_UNK func_020483e0;

void func_02048330(void) {
    M2C_FIELD(&data_020d0354, M2C_UNK **, 0) = &func_02048360;
    M2C_FIELD(&data_020d0354, M2C_UNK **, 4) = &func_0204839c;
    M2C_FIELD(&data_020d0354, M2C_UNK **, 8) = &func_020483e0;
}
