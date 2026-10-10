#include "m2c.h"

M2C_UNK func_0205c3b4(void *, M2C_UNK);             /* extern */
void *func_02088e08(void *);                        /* extern */
s32 func_020931d8(s32);                             /* extern */
M2C_UNK func_0209c740(s32, M2C_UNK, void **);       /* extern */

void *func_020a1178(M2C_UNK arg0, void *arg1) {
    void *sp0;
    s32 temp_r4;
    void *temp_r0;

    temp_r4 = M2C_FIELD(arg1, s32 *, -8);
    func_0209c740(func_020931d8(temp_r4), arg0, &sp0);
    switch (temp_r4) {                              /* irregular */
        case 0x94:
            if (M2C_FIELD(M2C_FIELD(sp0, void **, 4), s32 *, 4) != 0) {
                func_0205c3b4(sp0, 0);
            }
            break;
        case 0x95:
            temp_r0 = func_02088e08(sp0);
            if (temp_r0 != NULL) {
                M2C_FIELD(temp_r0, s32 *, 4) = 0;
            }
            break;
    }
    return arg1;
}
