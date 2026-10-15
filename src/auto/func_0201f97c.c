#include "m2c.h"

/* The second argument is a 4-byte structure passed by value. mwcc homes the
   register arguments of a function with a by-value structure parameter
   (push {r0, r1, r2, r3}) and reads the structure back from the frame: that is
   where the two [sp, #0xc] loads come from. func_02022094, the dispatcher that
   calls this handler, passes the same type by value (it matches with it). */
typedef struct {
    s32 f0;
} M2C_S4;

void func_0201fc70(void);
void func_0201fc74(void);
extern M2C_UNK data_020c4a64;

s32 func_0201f97c(void *arg0, M2C_S4 arg1) {
    func_0201fc70();
    M2C_FIELD(&data_020c4a64, void **, 0x20) = arg0;
    if (M2C_FIELD(arg0, s32 *, 0x4C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = arg1.f0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x44) = arg1.f0;
    }
    func_0201fc74();
    return 1;
}
