#include "m2c.h"

M2C_UNK func_02047bfc();
extern M2C_UNK data_020d02ec;
extern M2C_UNK data_020d0304;
extern u32 data_020d031c;

M2C_UNK *func_02048048(void) {
    if ((u32) M2C_FIELD(&data_020d02ec, u32 *, 4) >= (u32) data_020d031c) {
        func_02047bfc();
    }
    return &data_020d0304;
}
