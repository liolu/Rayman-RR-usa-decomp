/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Sound_FlushCommand from https://github.com/RonyxDumb/mkds src/arm9/020211e4_Sound_FlushCommand.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
struct SNDCommand {
    struct SNDCommand *llNext;
    s32 id;
    u32 arg[4];
};
extern const struct SNDCommand *func_02019150(u32 flags);
extern BOOL func_02018eac(u32 flags);
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode OS_DisableIrq(void);
extern OSIntrMode OS_RestoreIrq(OSIntrMode state);
extern void func_0200e96c(u32 cycles);
extern void func_0200d6fc(register const void *startAddr, register u32 nBytes);
extern s32 func_02018424(s32 fifotag, u32 data, BOOL err);
extern struct SNDCommand data_020c23c0[256];
extern struct SNDCommand *data_020c2118[8 + 1];
extern struct SNDCommand *data_020c20fc;
extern struct SNDCommand *data_020c2100;
extern s32 data_020c210c;
extern s32 data_020c2110;
extern u32 data_020c2114;
extern void func_02018c18(void);
const struct SNDCommand *func_02019150(u32 flags);
BOOL func_02018eac(u32 flags) {
    OSIntrMode oldirq = OS_DisableIrq();

    if (data_020c20fc == ((void *) 0)) {
        (void) OS_RestoreIrq(oldirq);
        return 1;
    }

    if (data_020c2110 >= 8) {
        if ((flags & 0x1) == 0) {
            (void) OS_RestoreIrq(oldirq);
            return 0;
        }

        do {
            (void) func_02019150(0x1);
        } while (data_020c2110 >= 8);
    }

    func_0200d6fc(data_020c23c0, sizeof(data_020c23c0));

    s32 result = func_02018424(7, (u32) data_020c20fc, 0);
    if (result < 0) {
        if ((flags & 0x1) == 0) {
            (void) OS_RestoreIrq(oldirq);
            return 0;
        }

        result = func_02018424(7, (u32) data_020c20fc, 0);
        while (result < 0) {
            (void) OS_RestoreIrq(oldirq);
            func_0200e96c(100);
            oldirq = OS_DisableIrq();
            result = func_02018424(7, (u32) data_020c20fc, 0);
        }
    }

    if ((flags & 0x2) != 0) {
        func_02018c18();
    }

    data_020c2118[data_020c210c] = data_020c20fc;

    if (++data_020c210c > 8) {
        data_020c210c = 0;
    }

    data_020c20fc = ((void *) 0);
    data_020c2100 = ((void *) 0);
    data_020c2110++;
    data_020c2114++;

    (void) OS_RestoreIrq(oldirq);
    return 1;
}
void func_02018c18(void);
