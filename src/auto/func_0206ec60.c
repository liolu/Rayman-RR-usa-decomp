#include "m2c.h"

M2C_UNK func_0200d6fc(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0200eb98();                            /* extern */
M2C_UNK func_02013f34(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
s32 func_020140a8(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_020143a0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020bd464;
extern M2C_UNK data_020bd470;
extern s32 data_020ddd38;
extern M2C_UNK data_020ddd3c;
extern M2C_UNK data_020ddd40;
extern M2C_UNK data_020ddd88;

void func_0206ec60(void) {
    func_020143a0(&data_020ddd88);
    if (func_020140a8(&data_020ddd88, &data_020bd464) == 0) {
        func_0200eb98();
    }
    func_020143a0(&data_020ddd40);
    if (func_020140a8(&data_020ddd40, &data_020bd470) != 0) {
        data_020ddd38 = M2C_FIELD(&data_020ddd88, s32 *, 0x28) - M2C_FIELD(&data_020ddd88, s32 *, 0x24);
    }
    func_0200d6fc(&data_020ddd3c, 4);
    func_02013f34(&data_020ddd88, &data_020ddd3c, 4);
}
