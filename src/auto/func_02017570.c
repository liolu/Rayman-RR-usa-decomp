/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02015944(M2C_UNK);
void func_02017a68(M2C_UNK);

extern s32 data_020bbfe0;
extern s32 data_020c201c;
extern s32 data_020c2028;
extern s32 data_020c202c;
extern s32 data_020c2030;

void func_02017570(void) {
    if (data_020bbfe0 != -1) {
        func_02017a68(data_020bbfe0);
    }
    func_02015944(data_020c2028);
    data_020c2030 = 0;
    data_020c202c = 0;
    data_020c201c = 0;
    data_020c2028 = 0;
}
