#include "m2c.h"

double frexp(double, s32 *);
double ldexp(double, s32);

void scalbn(double arg0, s32 arg1) {
    s32 sp0;
    double d;

    d = frexp(arg0, &sp0);
    sp0 += arg1;
    ldexp(d, sp0);
}
