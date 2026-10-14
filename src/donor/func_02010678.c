/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PM_SendUtilityCommandAsync from https://github.com/RonyxDumb/mkds src/arm9/0214f630_func_0214f630.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
typedef void (*PMCallback)(u32 result, void *arg);
extern u32 func_02010678(u32 number, PMCallback callback, void *arg);
extern void func_020101d4(u32 data);
typedef struct {
    BOOL lock;
    PMCallback callback;
    void *callbackArg;
    void *work;
} PMiWork;
inline u32 PMi_MakeData1(u32 bit, u32 seq, u32 command, u32 data) {
    return (bit) | ((seq) << 16) | ((command) << 8) | ((data) & 0xff);
}
inline u32 PMi_MakeData2(u32 bit, u32 seq, u32 data) {
    return (bit) | ((seq) << 16) | ((data) & 0xffff);
}
extern BOOL func_020109f0(void);
extern PMiWork data_020c1034;
BOOL func_020109f0(void);
u32 func_02010678(u32 number, PMCallback callback, void *arg) {
    u32 pxi_send_data;

    if (!func_020109f0()) {
        return 1;
    }

    do {
        data_020c1034.callback    = (callback);
        data_020c1034.callbackArg = (arg);
    } while (0);

    pxi_send_data = PMi_MakeData1(0x02000000, 0, 0x0063, number >> 16);
    func_020101d4(pxi_send_data);

    pxi_send_data = PMi_MakeData2(0x01000000, 1, number);
    func_020101d4(pxi_send_data);

    return 0;
}
void func_020101d4(u32 data);
