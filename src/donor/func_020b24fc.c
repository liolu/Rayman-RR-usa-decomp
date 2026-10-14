/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SoundSystem_Init from https://github.com/sturmds/advance-wars-dual-strike-decomp src/game/main/sound/sound_system_init.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed char s8;
typedef struct CallbackNode {
    void (*func)(void);
    void *arg;
    struct CallbackNode *next;
} CallbackNode;
extern s8 data_020e924c;
extern u32 data_020e9254;
extern u32 data_020e9250;
extern CallbackNode data_020e9264;
extern CallbackNode data_020e9258;
extern void func_020b248c(void);
extern void func_020b2480(void);
extern void func_02018b2c(void);
extern void func_0200fd78(CallbackNode *node);
extern void func_0200fd60(CallbackNode *node);
extern void *func_020b25a4(void);
extern void func_020b340c(void);
extern void func_020b2978(void);
void func_020b24fc(void) {
    if (data_020e9254 != 0) {
        return;
    }
    data_020e9254 = 1;
    func_02018b2c();
    data_020e9258.func = func_020b248c;
    data_020e9258.arg  = ((void *) 0);
    data_020e9264.func = func_020b2480;
    data_020e9264.arg  = ((void *) 0);
    func_0200fd78(&data_020e9258);
    func_0200fd60(&data_020e9264);
    func_020b25a4();
    func_020b340c();
    func_020b2978();
    data_020e924c = -1;
    data_020e9250 = 1;
}
