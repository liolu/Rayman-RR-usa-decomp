/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_ReceiveMessage from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_ReceiveMessage.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int OS_DisableIrq(void);
extern void OS_RestoreIrq(int state);
extern void func_0200ccbc(void *queue);
extern void func_0200cc3c(void *queue);
extern long long func_0200ab28(int a, int b);
int func_0200d3c8(char *q, void **out, int flags) {
    int enabled = OS_DisableIrq();
    while (*(int *) (q + 0x1c) == 0) {
        if ((flags & 1) == 0) {
            OS_RestoreIrq(enabled);
            return 0;
        }
        func_0200ccbc(q + 8);
    }
    if (out != 0) {
        *out = (*(void ***) (q + 0x10))[*(int *) (q + 0x18)];
    }
    *(int *) (q + 0x18) = (int) (func_0200ab28(*(int *) (q + 0x18) + 1, *(int *) (q + 0x14)) >> 32);
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) - 1;
    func_0200cc3c(q);
    OS_RestoreIrq(enabled);
    return 1;
}
