#include "m2c.h"

/* The engine passes an object handle by value: a 4-byte aggregate occupies r0,
 * so MWCC keeps the parameter's stack home and reloads it through its address
 * (the "add r0, sp, #0x18 / ldr r0, [r0]" pair in the game's code).  Declaring
 * the handle as a plain pointer instead makes MWCC load it directly and emits a
 * function 4 bytes shorter, so the by-value aggregate type is required here. */
typedef struct {
    M2C_UNK *obj;
} M2C_OBJ;

M2C_UNK func_020211d8(M2C_OBJ, u8 *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02024200(M2C_UNK, u8 *);                        /* extern */

void func_02024e0c(M2C_OBJ arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    u8 sp0[8];

    func_02024200(arg1, sp0);
    func_020211d8(arg0, sp0, arg2, arg3, arg4);
}
