/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214fefc from https://github.com/RonyxDumb/mkds src/arm9/0214fefc_func_0214fefc.c (license: none), reused by
 * tools/donor_match.py */
extern int func_020109f0(void);
extern void func_020101d4(int param);
extern void func_0200fea4(int a, int b, int c, int d);
extern volatile int data_020c1020;
extern int data_020c1024;
int func_020106ec(unsigned int a, unsigned int b) {
    volatile int *p;

    if (!func_020109f0()) {
        return 1;
    }
    data_020c1020 = 0;
    func_020101d4(0x3006000);
    p = &data_020c1020;
    while (!*p) {
    }
    *p            = 0;
    data_020c1024 = 0;
    func_0200fea4(0, 2, 0, 0);
    func_020101d4((a & 0xff) | 0x2006100);
    func_020101d4((b & 0xffff) | 0x1010000);
    return 0;
}
