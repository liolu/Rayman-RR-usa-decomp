#include "m2c.h"

/* Metrowerks MSL file modes (only the fields used here are needed).
 * The bit layout has to match the one the game was built with:
 *   open_mode:2 io_mode:3 buffer_mode:2 file_kind:3 file_orientation:2 binary_io:1
 */
typedef struct {
    u32 open_mode : 2;
    u32 io_mode : 3;
    u32 buffer_mode : 2;
    u32 file_kind : 3;
    u32 file_orientation : 2;
    u32 binary_io : 1;
} __file_modes;

typedef struct {
    s32 handle;
    __file_modes mMode;
} FILE;

enum __file_orientation {
    __unoriented,
    __char_oriented,
    __wide_oriented
};

enum __file_kinds {
    __closed_file,
    __disk_file,
    __console_file,
    __unavailable_file
};

/* The C library's fwide(): set/query the orientation of a stream. */
s32 func_02004614(FILE *stream, s32 mode) {
    s32 res;
    s32 orientation;

    if (stream == NULL || stream->mMode.file_kind == __closed_file) {
        return 0;
    }

    orientation = stream->mMode.file_orientation;
    switch (orientation) {
        case __unoriented:
            if (mode > 0) {
                stream->mMode.file_orientation = __wide_oriented;
            } else if (mode < 0) {
                stream->mMode.file_orientation = __char_oriented;
            }
            res = mode;
            break;
        case __wide_oriented:
            res = 1;
            break;
        case __char_oriented:
            res = -1;
            break;
    }
    return res;
}
