#include "m2c.h"

/* The game keeps the 64-bit IEEE value in a two-word aggregate: it is passed in
 * r0:r1 and the prologue spills it with 'push {r0, r1, r2, r3}', then the high
 * word is read from its home slot. Caller func_0200862c passes it as (r0 = low
 * word, r1 = high word), which is exactly the AAPCS layout of this union. */
typedef union {
    f64 value;
    struct {
        u32 lo;
        u32 hi;
    } word;
} M2C_DBL;

s32 func_020088e8(M2C_DBL value) {
    return value.word.hi & 0x80000000;
}
