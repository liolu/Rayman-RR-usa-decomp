/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* G3C_UpdateGXDLInfo from https://github.com/ntrtwl/NitroSDK libraries/gx/src/g3c.c (license: none), reused by
 * tools/donor_match.py */
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
extern void func_02016228(GXDLInfo *info, int n);
void func_02016228(GXDLInfo *info, int n) {
    info->curr_param += n;

    ((void) 0);

    if (((u32) (++info->curr_cmd) & 0x3) == 0) {
        if (info->param0_cmd_flg) {
            *(u32 *) (info->curr_param++) = 0;
            info->param0_cmd_flg          = 0;
        }

        info->curr_cmd = (u8 *) (info->curr_param++);
    }

    ((void) 0);
}
