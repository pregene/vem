#if !defined(__VIRTUAL_EMOTION_CELL__)
#define __VIRTUAL_EMOTION_CELL__

#pragma once

typedef enum {
    CELL_TYPE_UNKNOWN = 0,
    CELL_TYPE_NORMAL,           // coefficient = 1.0
    CELL_TYPE_RELAY,            // coefficient = 0.0001
    CELL_TYPE_AMP2,             // coefficient = 0.001
    CELL_TYPE_AMP3,             // coefficient = 0.00001
    CELL_TYPE_SEP2,             // coefficient = 0.001
    CELL_TYPE_SEP3,             // coefficient = 0.001
    CELL_TYPE_3TERM,            // coefficient = 2.0
    CELL_TYPE_2TERM,            // coefficient = 1.5
    CELL_TYPE_1TERM,            // coefficient = 1.5
    CELL_TYPE_COND1,            // coefficient = 0.00001
    CELL_TYPE_COND7,            // coefficient = 0.0
    CELL_TYPE_COND49,           // coefficient = 0.0
    CELL_TYPE_COND365,          // coefficient = 0.0
    CELL_TYPE_CONDEVER,         // coefficient = 0.0
} VEMCELL;

#endif // __VIRTUAL_EMOTION_CELL__
