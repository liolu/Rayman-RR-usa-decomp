#include "m2c.h"

f64 func_02007828(f64 x, f64 y) {
    ((u32 *) &x)[1] = (((u32 *) &x)[1] & 0x7FFFFFFF) | (((u32 *) &y)[1] & 0x80000000);
    return x;
}
