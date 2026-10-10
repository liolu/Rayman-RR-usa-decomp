typedef struct tdstObj {
    char pad[0x15];
    unsigned char ucFlag;
} tdstObj;
void func_02027420(tdstObj *p_stObj, long lArg1, long lArg2);
void func_02024ed4(tdstObj *p_stObj, long lArg1, long lArg2);
void func_020249a0(tdstObj *p_stObj, long lArg1, long lArg2) {
    if (p_stObj->ucFlag != 0) {
        func_02027420(p_stObj, lArg1, lArg2);
    } else {
        func_02024ed4(p_stObj, lArg1, lArg2);
    }
}
