#include "m2c.h"
extern u8 FSi_FindPathCommand[];
extern u8 FSi_GetPathCommand[];
extern u8 FSi_OpenFileDirectCommand[];
extern u8 FSi_OpenFileFastCommand[];
extern u8 FSi_ReadDirCommand[];
extern u8 FSi_ReadFileCommand[];
extern u8 FSi_SeekDirCommand[];
extern u8 FSi_WriteFileCommand[];
extern u8 func_02012c90[];
const u32 fsi_default_command[9] = {
    (u32) &FSi_ReadFileCommand,     (u32) &FSi_WriteFileCommand,      (u32) &FSi_SeekDirCommand,
    (u32) &FSi_ReadDirCommand,      (u32) &FSi_FindPathCommand,       (u32) &FSi_GetPathCommand,
    (u32) &FSi_OpenFileFastCommand, (u32) &FSi_OpenFileDirectCommand, (u32) &func_02012c90};
