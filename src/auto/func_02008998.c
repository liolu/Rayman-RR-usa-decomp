/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b18f0 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_020b18f0.c (license: MIT), reused by
 * tools/donor_match.py */
extern unsigned char data_020b5f40[];
int func_02008998(const unsigned char *s1, const unsigned char *s2) {
    unsigned char c1, c2;
    do {
        int a = *s1++;
        int b;
        c1 = (a < 0 || a >= 0x80) ? a : data_020b5f40[a];
        b  = *s2++;
        c2 = (b < 0 || b >= 0x80) ? b : data_020b5f40[b];
        if (c1 < c2) {
            return -1;
        }
        if (c1 > c2) {
            return 1;
        }
    } while (c1 != 0);
    return 0;
}
