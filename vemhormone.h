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
    HORMONE_ADRENALINE,   // 흥분 (싸움 혹은 도망 상황)
    HORMONE_NORADRENALINE,
    HORMONE_DOPAMINE,     // 	심장 박동수 및 혈압 증가
    HORMONE_ANTIMULEERIAN,  // 폐경 확인 정도 (0이면 폐경)
    HORMONE_ADIPONECTIN,    // 식용 억제..
    HORMONE_ADRENOCORTICOTROPIC   // 부신피질호르몬
      HORMONE_CORTISOL,     // 혈당을 높이고, 면역 시스템을 저하시키며,
                            // 탄수화물, 단백질, 지방의 대사를 돕는 작용을 한다.
                            // 코르티솔은 뼈의 생성을 막는 역할
      HORMONE_ALDOSTERONE,    // 나트륨 이온의 재흡수와 칼륨 이온 의 방출을 증가
      HORMONE_ANDROGEN,     //  남성 생식계의 성장과 발달에 영향을 미치는 호르몬
    HORMONE_ARGIPRESSIN,    // 항이뇨호르몬 (바소프레신)
    HORMONE_CALCITONIN,   // 혈중 칼슘의 수치를 낮추고 뼈에 칼슘을 저장하도록 함
    HORMONE_CHOLECYSTOKININ, // 지방이나 단백질을 소화하는 것을 촉진, 배고픔 억제
    HORMONE_CORTICOTROPIN_RELEASE, // 코르티솔 수치가 떨어질 때 시상하부는 부신피질자극호르몬방출호르몬(CRH)을 생성
    HORMONE_FOLLICLE_STIMULATING,  // 난소에서 그라프 여포가 성숙되도록 함. 정자형성 안드로겐 결합 및 생산 촉진
    HORMONE_GASTRIN,    // 위산 분비 촉진
    HORMONE_GHRELIN,    // 식용 촉진. 성장 호르몬 분비
    HORMONE_LEPTIN,     // 포만감을 느끼게 함..
    HORMONE_INSULIN,    // 혈당 수치를 낮춘다..
    HORMONE_GLUCAGON,   // 혈당 수치를 증가 시킴..

    /* 농협 352-1835-0007-43 정예림 30,000원 (완료)*/


} VHORMONE;

#define HOR_5_HT    HORMONE_SEROTONIN
#define HOR_T4      HORMONE_THYROXINE
#define HOR_T3      HORMONE_3IODOTHYROXINE
#define HOR_EPI     HORMONE_ADRENALINE
#define HOR_NRE     HORMONE_NORADRENALINE
#define HOR_DPM     HORMONE_DOPAMINE
#define HOR_PIH     HORMONE_DOPAMINE
#define HOR_DA      HORMONE_DOPAMINE
#define HOR_AMH     HORMONE_ANTIMULEERIAN
#define HOR_ACRP30  HORMONE_ADIPONECTIN
#define HOR_ACTH    HORMONE_ADRENOCORTICOTROPIC
#define HOR_ADH     HORMONE_ARGIPRESSIN
#define HOR_CT      HORMONE_CALCITONIN
#define HOR_CCK     HORMONE_CHOLECYSTOKININ
#define HOR_CRH     HORMONE_CORTICOTROPIN_RELEASE
#define HOR_FSH     HORMONE_FOLLICLE_STIMULATING
#define HOR_GRP     HORMONE_GASTRIN
#define HOR_INS     HORMONE_INSULIN
#define HOR_GCG     HORMONE_GLUCAGON


#endif // __VIRTUAL_EMOTION_HORMONE__
