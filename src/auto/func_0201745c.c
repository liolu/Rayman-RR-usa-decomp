/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02015850(M2C_UNK);
void func_02017a68(M2C_UNK);

extern s32 data_020bbfe0;
extern s32 data_020c2020;
extern s32 data_020c2024;

void func_0201745c(void) {
    if (data_020bbfe0 != -1) {
        func_02017a68(data_020bbfe0);
    }
    func_02015850(data_020c2024);
    data_020c2024 = 0;
    data_020c2020 = 0;
}
