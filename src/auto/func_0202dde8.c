
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
typedef s32 M2C_UNK;
s32 func_01ff8814(s32, s32, s32, s32, s32, s32);
void func_0202dde8(void *arg0, void *arg1, void *arg2, void *arg3) {
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r0;
    s32 temp_r11;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    *((s32 *) (((s8 *) arg1) + 0)) = 0x1000;
    *((s32 *) (((s8 *) arg1) + 4)) = 0;
    *((s32 *) (((s8 *) arg1) + 8)) = 0;
    *((s32 *) (((s8 *) arg2) + 0)) = 0;
    *((s32 *) (((s8 *) arg2) + 4)) = 0x1000;
    *((s32 *) (((s8 *) arg3) + 4)) = (*((s32 *) (((s8 *) arg3) + 0)) = (*((s32 *) (((s8 *) arg2) + 8)) = 0));
    *((s32 *) (((s8 *) arg3) + 8)) = 0x1000;
    if (((u32) (*((u32 *) (((s8 *) arg0) + 0)))) <= 3U) {
        return;
    }
    temp_r6 =
        func_01ff8814(*((s32 *) (((s8 *) arg0) + 0x1C)), *((s32 *) (((s8 *) arg0) + 0x40)), *((s32 *) (((s8 *) arg0) + 0x20)),
                      *((s32 *) (((s8 *) arg0) + 0x44)), *((s32 *) (((s8 *) arg0) + 0x24)), *((s32 *) (((s8 *) arg0) + 0x48)));
    temp_r5 =
        func_01ff8814(*((s32 *) (((s8 *) arg0) + 0x28)), *((s32 *) (((s8 *) arg0) + 0x40)), *((s32 *) (((s8 *) arg0) + 0x2C)),
                      *((s32 *) (((s8 *) arg0) + 0x44)), *((s32 *) (((s8 *) arg0) + 0x30)), *((s32 *) (((s8 *) arg0) + 0x48)));
    temp_r4 =
        func_01ff8814(*((s32 *) (((s8 *) arg0) + 0x34)), *((s32 *) (((s8 *) arg0) + 0x40)), *((s32 *) (((s8 *) arg0) + 0x38)),
                      *((s32 *) (((s8 *) arg0) + 0x44)), *((s32 *) (((s8 *) arg0) + 0x3C)), *((s32 *) (((s8 *) arg0) + 0x48)));
    temp_r11 =
        func_01ff8814(*((s32 *) (((s8 *) arg0) + 0x1C)), *((s32 *) (((s8 *) arg0) + 0x4C)), *((s32 *) (((s8 *) arg0) + 0x20)),
                      *((s32 *) (((s8 *) arg0) + 0x50)), *((s32 *) (((s8 *) arg0) + 0x24)), *((s32 *) (((s8 *) arg0) + 0x54)));
    sp8 =
        func_01ff8814(*((s32 *) (((s8 *) arg0) + 0x28)), *((s32 *) (((s8 *) arg0) + 0x4C)), *((s32 *) (((s8 *) arg0) + 0x2C)),
                      *((s32 *) (((s8 *) arg0) + 0x50)), *((s32 *) (((s8 *) arg0) + 0x30)), *((s32 *) (((s8 *) arg0) + 0x54)));
    spC =
        func_01ff8814(*((s32 *) (((s8 *) arg0) + 0x34)), *((s32 *) (((s8 *) arg0) + 0x4C)), *((s32 *) (((s8 *) arg0) + 0x38)),
                      *((s32 *) (((s8 *) arg0) + 0x50)), *((s32 *) (((s8 *) arg0) + 0x3C)), *((s32 *) (((s8 *) arg0) + 0x54)));
    sp10 =
        func_01ff8814(*((s32 *) (((s8 *) arg0) + 0x1C)), *((s32 *) (((s8 *) arg0) + 0x58)), *((s32 *) (((s8 *) arg0) + 0x20)),
                      *((s32 *) (((s8 *) arg0) + 0x5C)), *((s32 *) (((s8 *) arg0) + 0x24)), *((s32 *) (((s8 *) arg0) + 0x60)));
    sp14 =
        func_01ff8814(*((s32 *) (((s8 *) arg0) + 0x28)), *((s32 *) (((s8 *) arg0) + 0x58)), *((s32 *) (((s8 *) arg0) + 0x2C)),
                      *((s32 *) (((s8 *) arg0) + 0x5C)), *((s32 *) (((s8 *) arg0) + 0x30)), *((s32 *) (((s8 *) arg0) + 0x60)));
    temp_r0 =
        func_01ff8814(*((s32 *) (((s8 *) arg0) + 0x34)), *((s32 *) (((s8 *) arg0) + 0x58)), *((s32 *) (((s8 *) arg0) + 0x38)),
                      *((s32 *) (((s8 *) arg0) + 0x5C)), *((s32 *) (((s8 *) arg0) + 0x3C)), *((s32 *) (((s8 *) arg0) + 0x60)));
    *((s32 *) (((s8 *) arg1) + 0)) = temp_r6;
    *((s32 *) (((s8 *) arg1) + 4)) = temp_r5;
    *((s32 *) (((s8 *) arg1) + 8)) = temp_r4;
    *((s32 *) (((s8 *) arg2) + 0)) = temp_r11;
    *((s32 *) (((s8 *) arg2) + 4)) = sp8;
    *((s32 *) (((s8 *) arg2) + 8)) = spC;
    *((s32 *) (((s8 *) arg3) + 0)) = sp10;
    *((s32 *) (((s8 *) arg3) + 4)) = sp14;
    *((s32 *) (((s8 *) arg3) + 8)) = temp_r0;
}
