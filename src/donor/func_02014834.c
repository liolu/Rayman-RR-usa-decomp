/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FX_InvSqrt from https://github.com/ntrtwl/NitroSDK libraries/fx/src/fx_cp.c (license: none), reused by tools/donor_match.py
 */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef signed long long int s64;
typedef volatile u16 vu16;
typedef u32 REGType32;
typedef vu16 REGType16v;
typedef s32 fx32;
typedef s64 fx64c;
static inline s32 CP_IsSqrtBusy(void) {
    return ((*(REGType16v *) (0x04000000 + 0x2b0)) & 0x8000);
}
static inline void CP_WaitSqrt(void) {
    while (CP_IsSqrtBusy()) {
    }
}
static inline u32 CP_GetSqrtResultImm32(void) {
    return (u32) (*((REGType32 *) (0x04000000 + 0x2b4)));
}
static inline u32 CP_GetSqrtResult32(void) {
    CP_WaitSqrt();
    return CP_GetSqrtResultImm32();
}
extern fx32 func_02014834(fx32 x);
extern fx64c FX_GetDivResultFx64c(void);
extern void FX_InvAsync(fx32 denom);
extern fx64c FX_GetInvResultFx64c(void);
extern void FX_SqrtAsync(fx32 x);
static inline fx64c FX_GetInvResultFx64c(void) {
    return FX_GetDivResultFx64c();
}
fx32 func_02014834(fx32 x) {
    if (x > 0) {
        fx64c inv_x;
        s64 sqrt_x;
        s64 tmp;

        FX_InvAsync(x);
        FX_SqrtAsync(x);

        inv_x  = FX_GetInvResultFx64c();
        sqrt_x = CP_GetSqrtResult32();
        tmp    = inv_x * sqrt_x;
        return (fx32) ((tmp + (1LL << ((32 + ((32 + 12) / 2 - 12)) - 1))) >> (32 + ((32 + 12) / 2 - 12)));
    } else {
        return 0;
    }
}
fx64c FX_GetDivResultFx64c(void);
void FX_InvAsync(fx32 denom);
void FX_SqrtAsync(fx32 x);
