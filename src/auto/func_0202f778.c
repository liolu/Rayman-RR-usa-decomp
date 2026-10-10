typedef struct {
    char a_cData[0x7C];
} tdstEntry;
extern tdstEntry *data_020cf6b8;
void func_0202eee0(tdstEntry *p_stEntry);
void func_0202f778(short wIndex) {
    if (wIndex == -1) {
        return;
    }
    func_0202eee0(&data_020cf6b8[wIndex]);
}
