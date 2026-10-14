/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* G3_EndMakeDL from https://github.com/ntrtwl/NitroSDK libraries/gx/src/g3.c (license: none), reused by tools/donor_match.py
 */
typedef unsigned char u8;
typedef unsigned long u32;
typedef int BOOL;
typedef struct {
    u8 *curr_cmd;
    u32 *curr_param;
    u32 *bottom;
    u32 length;
    BOOL param0_cmd_flg;
} GXDLInfo;
extern u32 func_020177c4(GXDLInfo *info);
#pragma thumb off
u32 func_020177c4(GXDLInfo *info) {
    u32 sz;
    if ((u8 *) info->bottom == info->curr_cmd) {
        return 0;
    }

    switch ((u32) info->curr_cmd & 3) {
        case 0:
            ((void) 0);
            return (u32) ((u32) info->curr_cmd - (u32) info->bottom);
        case 1:
            *info->curr_cmd++ = 0;
        case 2:
            *info->curr_cmd++ = 0;
        case 3:
            *info->curr_cmd++ = 0;
    }

    if (info->param0_cmd_flg) {
        *(u32 *) (info->curr_param++) = 0;
        info->param0_cmd_flg          = 0;
    }

    info->curr_cmd = (u8 *) info->curr_param;

    ((void) 0);
    ((void) 0);

    sz = (u32) ((u32) info->curr_cmd - (u32) info->bottom);
    return sz;
}
