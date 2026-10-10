/* Compiler probe: func_0200cbdc, size 0x2c. First object of type 1 in a list. NOT MATCHING yet (see docs/troubleshooting.md).
 */
typedef struct tdstObj {
    char pad[0x64];
    int lType;
    struct tdstObj *p_stNext;
} tdstObj;
typedef struct {
    int a;
    int b;
    tdstObj *p_stFirst;
} tdstObjList;
extern tdstObjList data_020c0c5c;

tdstObj *func_0200cbdc(void) {
    tdstObj *p_stObj = data_020c0c5c.p_stFirst;
    while (p_stObj != 0) {
        if (p_stObj->lType == 1) {
            return p_stObj;
        }
        p_stObj = p_stObj->p_stNext;
    }
    return p_stObj;
}
