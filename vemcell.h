#if !defined(__VIRTUAL_EMOTION_CELL__)
#define __VIRTUAL_EMOTION_CELL__

#pragma once

/* 영양소 */
#define NU_GLU      0
#define NU_PROTEIN  1
#define NU_LEP      2
#define NU_CA       3
#define NU_NA       4
#define NU_P        5
#define NU_N        6

/* SIGNAL */
#define VSIGNAL_WAVE        0
#define VSIGNAL_LIGHT       1
#define VSIGNAL_PRESS       2
#define VSIGNAL_MOLECULE    3

/* 판단 */
#define VJUDGE_BAD          -1
#define VJUDGE_UNKOWN       0
#define VJUDGE_GOOD         1


/* 감정 */
#define VEMOTION_ANGRY      -4.0
#define VEMOTION_CRY        -3.0
#define VEMOTION_HATE       -2.0
#define VEMOTION_SAD        -1.0
#define VEMOTION_UNKOWN      0.0
#define VEMOTION_SMILE       1.0
#define VEMOTION_LAUGH       2.0
#define VEMOTION_GOOD        3.0
#define VEMOTION_HAPPY       4.0


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
