/* Writes 0x1A to the I/O register at 0x04000400, then forwards its argument. */
void func_02017fc8(long lArg);
void func_020162f0(long lArg) {
    *(volatile unsigned long *) 0x04000400 = 0x1A;
    func_02017fc8(lArg);
}
