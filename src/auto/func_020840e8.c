#include "m2c.h"

M2C_UNK (*func_020931b8(s32))(M2C_UNK, void *, M2C_UNK);

void func_020840e8(M2C_UNK arg0, s32 *arg1, M2C_UNK arg2) {
    func_020931b8 (*arg1)(arg0, ((s8 *) arg1 + 8), arg2);
}
