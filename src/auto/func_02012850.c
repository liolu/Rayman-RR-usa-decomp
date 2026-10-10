/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02012208(M2C_UNK);                     /* extern */
M2C_UNK func_02012554();                            /* extern */
M2C_UNK func_02012684();                            /* extern */
M2C_UNK func_02012a20(M2C_UNK *);                   /* extern */
M2C_UNK func_020182f4();                            /* extern */
s32 func_020184d8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02018500(M2C_UNK, M2C_UNK *);          /* extern */
extern s32 data_020c1978;
extern s32 data_020c197c;
extern s32 data_020c1980;
extern M2C_UNK data_020c1a60;
extern M2C_UNK func_02012594;
extern M2C_UNK func_020125c8;
extern M2C_UNK func_02012648;

void func_02012850(void) {
    if (data_020c1978 != 0) {
        return;
    }
    data_020c1978 = 1;
    func_02012554();
    data_020c197c = 0;
    func_020182f4();
    do {

    } while (func_020184d8(0xD, 1) == 0);
    func_02018500(0xD, &func_02012648);
    func_02012684();
    func_02018500(0xD, NULL);
    func_02018500(0xD, &func_020125c8);
    data_020c1980 = 0;
    func_02012a20(&data_020c1a60);
    func_02018500(0x11, &func_02012594);
    func_02012208(0);
}
