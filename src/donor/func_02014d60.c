/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FX_SinFx64c_internal from https://github.com/ntrtwl/NitroSDK libraries/fx/src/fx_trig.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long long int u64;
typedef signed long long int s64;
typedef s64 fx64c;
extern u64 func_02014d60(u64 y);
#pragma thumb off
u64 func_02014d60(u64 y) {
    u64 tmp;
    u64 yy;

    if (y == 0x100000000LL) {
        return (u64) ((fx64c) 0x00000000b504f334LL);
    }

    yy = y * y >> 32;

    tmp = ((fx64c) 0x0000000100000000LL) - (((u64) 36796552LL) * yy >> 32);
    tmp = ((fx64c) 0x0000000100000000LL) - ((((u64) 63079804LL) * yy >> 32) * tmp >> 32);
    tmp = ((fx64c) 0x0000000100000000LL) - ((((u64) 132467588LL) * yy >> 32) * tmp >> 32);
    tmp = ((u64) 3373259426LL) - ((((u64) 346799334LL) * yy >> 32) * tmp >> 32);

    return tmp * y >> 32;
}
