/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FX_CosFx64c_internal from https://github.com/ntrtwl/NitroSDK libraries/fx/src/fx_trig.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long long int u64;
typedef signed long long int s64;
typedef s64 fx64c;
extern u64 func_02014c90(u64 y);
u64 func_02014c90(u64 y) {
    u64 tmp;
    u64 yy;

    if (y == 0x100000000LL) {
        return (u64) ((fx64c) 0x00000000b504f334LL);
    }

    yy = y * y >> 32;

    tmp = ((fx64c) 0x0000000100000000LL) - (((u64) 47309853LL) * yy >> 32);
    tmp = ((fx64c) 0x0000000100000000LL) - ((((u64) 88311725LL) * yy >> 32) * tmp >> 32);
    tmp = ((fx64c) 0x0000000100000000LL) - ((((u64) 220779313LL) * yy >> 32) * tmp >> 32);
    tmp = ((fx64c) 0x0000000100000000LL) - ((((u64) 1324675879LL) * yy >> 32) * tmp >> 32);

    return tmp;
}
