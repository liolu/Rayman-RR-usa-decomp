typedef struct tdstObj {
    char pad[8];
    long lValue;
} tdstObj;
void func_02084f6c(tdstObj *p_stObj, long lValue);
void func_02074968(tdstObj *p_stObj, long lValue) {
    if (p_stObj->lValue != lValue) {
        func_02084f6c(p_stObj, lValue);
    }
}
