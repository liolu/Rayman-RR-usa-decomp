/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
#include "m2c.h"

typedef unsigned long __file_handle;
extern int __read_console(__file_handle handle, unsigned char *buffer, int *count, void *ref);
// clang-format off
extern asm int sys_ReadChar(void);
extern void sys_WriteChar(M2C_UNK);

/* func_0202de00 from projets/heroes-of-mana/src/donor/func_0202de00.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format on
int __read_console(__file_handle handle, unsigned char *buffer, int *count, void *ref) {
    unsigned long i, n;

    for (i = 0, n = *count; i < n; i++) {
        buffer[i] = sys_ReadChar();
        if (buffer[i] == '\r' || buffer[i] == '\n') {
            *count = i + 1;
            break;
        }
    }

    return 0;
}

s32 __write_console(s32 arg0, s32 arg1, s32 arg2) {
    s32 i;
    u32 n;

    n = *(u32 *) arg2;
    for (i = 0; i < n; i++) {
        sys_WriteChar(arg1 + i);
    }
    return 0;
}
