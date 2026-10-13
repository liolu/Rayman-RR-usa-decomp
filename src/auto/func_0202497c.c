#include "m2c.h"

void func_02024eac(void *);
void func_020278d0(void *);

void func_0202497c(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0x4);

    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_020278d0(p);
        return;
    }
    func_02024eac(p);
}
