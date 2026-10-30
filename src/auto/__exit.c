#include "m2c.h"

s32 func_0200d4bc(void *);
void OS_LockMutex(void *);
void func_0200d578(void *);
void fflush(s32);
void _ExitProcess(void);
extern u8 OSi_ThreadInfo[];
extern u8 __console_exit[];
extern void (*__atexit_funcs[])(void);
extern s32 __cs_id;
extern s32 __cs_ref;
extern u8 __cs[];

void __exit(void) {
    s32 t;
    if (func_0200d4bc(__cs) == 0) {
        __cs_id  = *(s32 *) (*(u8 **) (OSi_ThreadInfo + 4) + 0x6C);
        __cs_ref = 1;
    } else if (__cs_id == *(s32 *) (*(u8 **) (OSi_ThreadInfo + 4) + 0x6C)) {
        __cs_ref += 1;
    } else {
        OS_LockMutex(__cs);
        __cs_id  = *(s32 *) (*(u8 **) (OSi_ThreadInfo + 4) + 0x6C);
        __cs_ref = 1;
    }
    if (*(volatile s32 *) (__console_exit + 8) > 0) {
        do {
            t                                      = *(volatile s32 *) (__console_exit + 8) - 1;
            *(volatile s32 *) (__console_exit + 8) = t;
            __atexit_funcs[t]();
        } while (*(volatile s32 *) (__console_exit + 8) > 0);
    }
    t        = __cs_ref - 1;
    __cs_ref = t;
    if (t == 0) {
        func_0200d578(__cs);
    }
    if (*(void (**)(void)) __console_exit != 0) {
        (*(void (**)(void)) __console_exit)();
        *(void (**)(void)) __console_exit = 0;
    }
    fflush(0);
    _ExitProcess();
}
