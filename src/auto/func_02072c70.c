#include "m2c.h"

M2C_UNK func_020424f8();                            /* extern */
M2C_UNK func_02046cec();                            /* extern */
M2C_UNK func_02046cf0(M2C_UNK);                     /* extern */
M2C_UNK func_02072be4();                            /* extern */
extern u8 data_020bbfbc;

s32 func_02072c70(void) {
    func_02072be4();
    func_020424f8();
    func_020424f8();
    if (data_020bbfbc != 0) {
        func_02046cf0(0);
    } else {
        func_02046cec();
    }
    return 1;
}
