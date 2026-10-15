#include "m2c.h"

s32 func_0201bdd0(void *);
void *func_0201c2b8(void *);
M2C_UNK func_0201c488(void *, s32, u8);
M2C_UNK func_0205b6c8(s32);
void *func_0205d0cc();
M2C_UNK func_0205d0d4();
extern s32 data_020dc18c;
extern s32 data_020dc194;

void func_0205b794(void) {
    void *var_r5;
    void *var_r6;

    func_0205d0d4();
    var_r6 = M2C_FIELD(func_0205d0cc(), void **, 8);
    var_r5 = func_0201c2b8(var_r6);
    if (func_0201bdd0(var_r6) != 0) {
        do {
            if (M2C_FIELD(var_r6, s32 *, 0) == 2) {
                func_0201c488(var_r6, data_020dc194,
                              M2C_FIELD(M2C_FIELD(M2C_FIELD(var_r6, void **, 4), void **, 4), u8 *, 0x24));
            }
            var_r6 = var_r5;
            var_r5 = func_0201c2b8(var_r5);
        } while (func_0201bdd0(var_r6) != 0);
    }
    func_0205b6c8(data_020dc194);
    func_0205b6c8(data_020dc18c);
}
