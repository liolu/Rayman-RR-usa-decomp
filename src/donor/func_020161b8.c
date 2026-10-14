/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* G3C_TexCoord from https://github.com/ntrtwl/NitroSDK libraries/gx/src/g3c.c (license: none), reused by tools/donor_match.py
 */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef int BOOL;
typedef s32 fx32;
typedef struct {
    u8 *curr_cmd;
    u32 *curr_param;
    u32 *bottom;
    u32 length;
    BOOL param0_cmd_flg;
} GXDLInfo;
typedef u32 GXSt;
extern void func_020162b0(GXDLInfo *info, int op, u32 param0);
extern void G3CS_TexCoord(GXDLInfo *info, fx32 s, fx32 t);
extern void func_02016228(GXDLInfo *info, int n);
extern void func_020161b8(GXDLInfo *info, fx32 s, fx32 t);
static inline void G3CS_TexCoord(GXDLInfo *info, fx32 s, fx32 t) {
    ((void) 0);
    ((void) 0);

    func_020162b0(info, 0x22, (((GXSt) ((u16) ((s16) (((s)) >> 8)) | ((u16) ((s16) (((t)) >> 8)) << 16)))));
}
void func_020162b0(GXDLInfo *info, int op, u32 param0);
void func_02016228(GXDLInfo *info, int n);
void func_020161b8(GXDLInfo *info, fx32 s, fx32 t) {
    G3CS_TexCoord(info, s, t);
    func_02016228(info, 1);
}
