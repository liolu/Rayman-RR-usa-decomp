/* Compiler probe: HIE_fn_bPopOnCameraMatrixStack (HieMtStk.c, line 150), 0x0201b39c, size 0x80. Matches with mwccarm 2.0, all
 * -O levels. */
typedef struct {
    char a_cData[0x64];
} POS_tdstCompletePosition;

extern unsigned long HIE_g_lNbMatrixInCameraStack;               /* 0x020c3f98 */
extern POS_tdstCompletePosition HIE_g_a_stCameraMatrixStack[];   /* 0x020c3f9c */
extern POS_tdstCompletePosition *HIE_g_p_stCurrentMatrix;        /* 0x020c3f90 */

void func_020534f4(void);
void func_02000f58(const char *szExpr, const char *szFile, const char *szFunc, int iLine);

unsigned char HIE_fn_bPopOnCameraMatrixStack(void) {
    if (HIE_g_lNbMatrixInCameraStack == 0) {
        func_020534f4();
    }
    HIE_g_lNbMatrixInCameraStack--;
    if (!(HIE_g_lNbMatrixInCameraStack > 0)) {
        func_02000f58("HIE_g_lNbMatrixInCameraStack>0", "HieMtStk.c", "HIE_fn_bPopOnCameraMatrixStack", 150);
    }
    HIE_g_p_stCurrentMatrix = &HIE_g_a_stCameraMatrixStack[HIE_g_lNbMatrixInCameraStack - 1];
    return 1;
}
