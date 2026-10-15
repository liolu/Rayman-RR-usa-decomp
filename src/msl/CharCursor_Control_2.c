/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef struct {
    signed char *pos;
    int eof;
} CharCursor;

/* func_020249f8 from projets/heroes-of-mana/src/donor/func_020249f8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
int CharCursor_Control(CharCursor *s, int c, int cmd) {
    switch (cmd) {
        case 0: {
            signed char *p = s->pos;
            int ch         = *p;
            if (ch == 0) {
                s->eof = 1;
                return -1;
            }
            s->pos = p + 1;
            return ch & 0xff;
        }
        case 1:
            if (s->eof == 0) {
                s->pos = s->pos - 1;
            } else {
                s->eof = 0;
            }
            return c;
        case 2:
            return s->eof;
        default:
            return 0;
    }
}
