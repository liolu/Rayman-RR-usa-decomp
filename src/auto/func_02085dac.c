/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

extern void func_0201a62c(void *arg0);

void func_02085dac(volatile s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_0201a62c((void *) &arg0);
    arg0 = 0;
}
