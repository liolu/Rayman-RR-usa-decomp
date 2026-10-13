#include "m2c.h"

f64 func_020079c0(f64 x) {
    ((u32 *) &x)[1] &= 0x7FFFFFFF;
    return x;
}
