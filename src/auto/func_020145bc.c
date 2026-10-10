/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02010a60(u16);                         /* extern */
M2C_UNK func_02010a80(u16);                         /* extern */
extern s32 data_020c1f84;

s32 func_020145bc(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_02010a80((u16) data_020c1f84);
            return 0;
        case 10:
            func_02010a60((u16) data_020c1f84);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
