#include "m2c.h"

double func_02007ba0(double, s32 *);     /* extern */
double func_02007c5c(double, s32);       /* extern */

void func_0200896c(double arg0, s32 arg1) {
    s32 sp0;
    double d;

    d = func_02007ba0(arg0, &sp0);
    sp0 += arg1;
    func_02007c5c(d, sp0);
}
