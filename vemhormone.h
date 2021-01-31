#if !defined(__VIRTUAL_EMOTION_HORMONE__)
#define __VIRTUAL_EMOTION_HORMONE__

#pragma once

typedef enum {
    HORMONE_UNKNOWN = 0,
    HORMONE_ENDOCRINE,    // Acts on the target cells after being released into the bloodstream.
    HORMONE_PARACRINE,    // Acts on the nearby cells and does not have to enter general circulation.
    HORMONE_AUTOCRINE,    // Affects the cell types that secreted it and causes a biological effect.
    HORMONE_INTRACRINE,   // Acts intracellularly on the cells that synthesized it.
    HORMONE_MELATONIN,    // 산화방지, 졸리게 만듦
    HORMONE_SEROTONIN,    // 감정, 식욕, 잠 조절 (증가 : 행복함 증대, 감소 : 피로, 졸림)
    HORMONE_THYROXINE,
    HORMONE_3IODOTHYROXINE,
    HORMONE_4IODOTHYROXINE,
    HORMONE_ADRENALINE,   // 흥분 (싸움 혹은 도망 상황)
    HORMONE_NORADRENALINE,
    HORMONE_DOPAMINE,     // 	심장 박동수 및 혈압 증가
    HORMONE_ANTIMULEERIAN,  // 폐경 확인 정도 (0이면 폐경)
    HORMONE_ADIPONECTIN,    // 식용 억제..

} VHORMONE;

#endif // __VIRTUAL_EMOTION_HORMONE__
