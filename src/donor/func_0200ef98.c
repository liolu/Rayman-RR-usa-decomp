/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* TP_GetLatestRawPointInAuto from https://github.com/RonyxDumb/mkds src/arm9/0214e6e4_func_0214e6e4.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned short int u16;
typedef signed long s32;
typedef volatile u16 vu16;
typedef enum {
    TP_REQUEST_COMMAND_SAMPLING      = 0x0,
    TP_REQUEST_COMMAND_AUTO_ON       = 0x1,
    TP_REQUEST_COMMAND_AUTO_OFF      = 0x2,
    TP_REQUEST_COMMAND_SET_STABILITY = 0x3,
    TP_REQUEST_COMMAND_AUTO_SAMPLING = 0x10
} TPRequestCommand;
typedef enum {
    TP_RESULT_SUCCESS = 0,
    TP_RESULT_INVALID_PARAMETER,
    TP_RESULT_ILLEGAL_STATUS,
    TP_RESULT_EXCLUSIVE,
    TP_RESULT_PXI_BUSY
} TPRequestResult;
typedef struct {
    u16 x;
    u16 y;
    u16 touch;
    u16 validity;
} TPData;
typedef void (*TPRecvCallback)(TPRequestCommand command, TPRequestResult result, u16 index);
extern void func_0200ef98(TPData *result);
extern const u16(*ctrdgi_fl_maxtime);
typedef struct {
    s32 x0;
    s32 xDotSize;
    s32 xDotSizeInv;
    s32 y0;
    s32 yDotSize;
    s32 yDotSizeInv;
} TPiCalibrateParam;
extern struct {
    TPRecvCallback callback;
    TPData buf;
    u16 index;
    u16 frequence;
    TPData *samplingBufs;
    u16 bufSize;
    TPiCalibrateParam calibrate;
    u16 calibrate_flg;
    vu16 state;
    vu16 err_flg;
    vu16 command_flg;
} data_020c0fc4;
void func_0200ef98(TPData *result) {
    s32 i, curr_index;
    TPData *tp;

    ((void) 0);
    ((void) 0);

    result->validity = (1 | 2);

    curr_index = data_020c0fc4.index;

    if (data_020c0fc4.frequence == 1 || data_020c0fc4.bufSize == 1) {
        *result = data_020c0fc4.samplingBufs[curr_index];
        return;
    }

    for (i = 0; i < data_020c0fc4.frequence && i < data_020c0fc4.bufSize - 1; i++) {
        s32 index;

        index = curr_index - i;
        if (index < 0) {
            index += data_020c0fc4.bufSize;
        }

        tp = &data_020c0fc4.samplingBufs[index];

        if (!tp->touch) {
            *result = *tp;
            return;
        }

        if (result->validity & 1) {
            if (!(tp->validity & 1)) {
                result->x = tp->x;
                if (i != 0) {
                    result->validity &= ~1;
                }
            }
        }

        if (result->validity & 2) {
            if (!(tp->validity & 2)) {
                result->y = tp->y;
                if (i != 0) {
                    result->validity &= ~2;
                }
            }
        }

        if (result->validity == 0) {
            result->touch = 1;
            return;
        }
    }

    result->touch = 1;
    return;
}
