/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PMi_WriteRegisterAsync from https://github.com/RonyxDumb/mkds src/arm9/0214f630_func_0214f630.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
typedef void (*PMCallback)(u32 result, void *arg);
extern void PMi_SendPxiData(u32 data);
extern u32 func_02010544(u16 registerAddr, u16 data, PMCallback callback, void *arg);
extern const u16(*ctrdgi_fl_maxtime);
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
extern BOOL PMi_Lock(void);
extern PMiWork PMi_Work;
BOOL PMi_Lock(void);
u32 func_02010544(u16 registerAddr, u16 data, PMCallback callback, void *arg) {
    u32 pxi_send_data;

    if (!PMi_Lock()) {
        return 1;
    }

    do {
        PMi_Work.callback    = (callback);
        PMi_Work.callbackArg = (arg);
    } while (0);

    pxi_send_data = PMi_MakeData1(0x02000000, 0, 0x0064, registerAddr);
    PMi_SendPxiData(pxi_send_data);

    pxi_send_data = PMi_MakeData2(0x01000000, 1, data);
    PMi_SendPxiData(pxi_send_data);

    return 0;
}
void PMi_SendPxiData(u32 data);
