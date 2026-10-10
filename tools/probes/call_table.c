/* Compiler probe: func_0200b53c, size 0x2c. Calls a NULL-terminated table of functions (.ctor). Matches with mwccarm 2.0
 * -O4,p. */
typedef void (*tdfnCallback)(void);
extern tdfnCallback data_020bbb2c[];

void func_0200b53c(void) {
    tdfnCallback *p_fn;
    for (p_fn = data_020bbb2c; p_fn != 0 && *p_fn != 0; p_fn++) {
        (*p_fn)();
    }
}
