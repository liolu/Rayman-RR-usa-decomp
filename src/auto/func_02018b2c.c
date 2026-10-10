/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200d674(M2C_UNK *);                   /* extern */
M2C_UNK func_02019284();                            /* extern */
M2C_UNK func_0201944c();                            /* extern */
extern s32 data_020c20d8;
extern M2C_UNK data_020c20dc;

void func_02018b2c(void) {
    if (data_020c20d8 != 0) {
        return;
    }
    data_020c20d8 = 1;
    func_0200d674(&data_020c20dc);
    func_02019284();
    func_0201944c();
}
