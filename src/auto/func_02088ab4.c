#include "m2c.h"
M2C_UNK func_01ff8668(s32 *);
M2C_UNK func_0202e1e0(s32, s32 *);
M2C_UNK func_020821f4(M2C_UNK, s32 *);

void func_02088ab4(void *arg0, M2C_UNK arg1) {
    s32 a[3];
    s32 b[3];

    func_0202e1e0(M2C_FIELD(arg0, s32 *, 0x24), a);
    func_020821f4(arg1, b);
    a[0] -= b[0];
    a[1] -= b[1];
    a[2] -= b[2];
    func_01ff8668(a);
}
