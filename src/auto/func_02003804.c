/* compiler: 2.0/sp1p5 -O2,p */
typedef struct Thr {
    unsigned char pad[0x6C];
    int id;
} Thr;
typedef struct TInfo {
    int w0;
    Thr *cur;
} TInfo;
typedef struct Cs {
    int w[3];
    int v;
} Cs;
extern int func_02004614(void *, int);
extern int func_0200d4bc(void *);
extern void OS_LockMutex(void *);
extern void func_0200d578(void *);
extern int __pformatter(void *, void *, char *, void *);
extern unsigned char data_020bbb8c[];
extern unsigned char data_020c0680[];
extern TInfo OSi_ThreadInfo;
extern Cs __cs_id;
extern Cs __cs_ref;
extern unsigned char func_02003794;

int func_02003804(char *fmt, ...) {
    int r;
    if (func_02004614(data_020bbb8c, -1) >= 0) {
        return -1;
    }
    if (func_0200d4bc(data_020c0680) == 0) {
        __cs_id.v  = OSi_ThreadInfo.cur->id;
        __cs_ref.v = 1;
    } else if (__cs_id.v == OSi_ThreadInfo.cur->id) {
        __cs_ref.v = __cs_ref.v + 1;
    } else {
        OS_LockMutex(data_020c0680);
        __cs_id.v  = OSi_ThreadInfo.cur->id;
        __cs_ref.v = 1;
    }
    r          = __pformatter(&func_02003794, data_020bbb8c, fmt, (void *) ((((unsigned int) &fmt) & ~3) + 4));
    __cs_ref.v = __cs_ref.v - 1;
    if (__cs_ref.v == 0) {
        func_0200d578(data_020c0680);
    }
    return r;
}
