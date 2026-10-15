/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PMi_CallCallbackAndUnlock from https://github.com/RonyxDumb/mkds src/arm9/0214f630_func_0214f630.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
typedef void (*PMCallback)(u32 result, void *arg);
typedef struct {
    BOOL lock;
    PMCallback callback;
    void *callbackArg;
    void *work;
} PMiWork;
extern PMiWork PMi_Work;
void func_02010954(u32 result) {
    PMCallback callback;
    void *arg;

    callback = PMi_Work.callback;
    arg      = PMi_Work.callbackArg;

    if (PMi_Work.lock) {
        PMi_Work.lock = 0;
    }

    if (callback) {
        PMi_Work.callback = 0;
        (callback)(result, arg);
    }
}
