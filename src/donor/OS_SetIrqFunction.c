/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209bb14 from projets/pokemon-dash/src/donor/func_0209bb14.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef void (*UnkIrqFunction)(void);
typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;
extern UnkIrqFunction SDK_AUTOLOAD_DTCM_START[22];
extern UnkIrqCallbackInfo OSi_IrqCallbackInfo[8];
extern void OS_SetIrqFunction(u32 mask, UnkIrqFunction func);
extern UnkIrqCallbackInfo OSi_IrqCallbackInfo[8];
void OS_SetIrqFunction(u32 mask, UnkIrqFunction func) {
    s32 i;
    for (i = 0; i < 22; i++) {
        if (mask & 1) {
            UnkIrqCallbackInfo *info = 0;

            if (8 <= i && i <= 11) {
                info = &OSi_IrqCallbackInfo[i - 8];
            } else if (3 <= i && i <= 6) {
                info = &OSi_IrqCallbackInfo[i + 1];
            } else {
                SDK_AUTOLOAD_DTCM_START[i] = func;
            }

            if (info != 0) {
                info->func   = (void (*)(void *)) func;
                info->arg    = 0;
                info->enable = 1;
            }
        }
        mask >>= 1;
    }
}
