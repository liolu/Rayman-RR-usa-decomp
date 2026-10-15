#include "m2c.h"

f64 fabs(f64 x) {
    ((u32 *) &x)[1] &= 0x7FFFFFFF;
    return x;
}
