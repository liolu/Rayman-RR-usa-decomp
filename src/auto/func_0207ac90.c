#include "m2c.h"

typedef struct {
    u16 flag;   /* 0x00 */
    u8 unk2;    /* 0x02 */
    u8 unk3;    /* 0x03 */
    s32 id;     /* 0x04 */
} TabEntry;     /* 0x08 */

extern TabEntry data_020dfe38[3];
extern M2C_UNK data_020be85c;
extern M2C_UNK data_020be88c;
extern M2C_UNK data_020be890;
extern M2C_UNK data_020be8d8;

void func_0207af08(M2C_UNK *, M2C_UNK *);

void func_0207ac90(s32 arg0) {
    u8 i;
    u8 j;

    i = 0;
    while (i < 3 && data_020dfe38[i].flag != 0 && data_020dfe38[i].id != arg0) {
        i++;
    }
    if (i < 3 && data_020dfe38[i].flag != 0) {
        data_020dfe38[i].flag = 0;
        data_020dfe38[i].id   = 0;
        func_0207af08(&data_020be85c, &data_020be88c);
        j = i + 1;
        if (j < 3 && data_020dfe38[j].flag != 0) {
            while (j < 3 && data_020dfe38[j].flag != 0) {
                data_020dfe38[j - 1]  = data_020dfe38[j];
                data_020dfe38[j].flag = 0;
                data_020dfe38[j].id   = 0;
                j++;
            }
        }
    } else {
        func_0207af08(&data_020be890, &data_020be8d8);
    }
}
