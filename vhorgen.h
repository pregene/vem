#if !defined(__VIRTUAL_EMOTION_HORMONE_GENESIS__)
#define __VIRTUAL_EMOTION_HORMONE_GENESIS__

#define HORMONE_REACTOR_MAX   100

#include "vem.h"
#include "vemhormone.h"

typedef enum {
    HORMONE_GEN_UNKNOWN = 0,
    HORMONE_GEN_ADRENALINE,
    HORMONE_GEN_MAX,
} VHORGEN;

typedef struct {
    uint32_t  id;
    double    duration;   // sec
    uint32_t  lifecounts;
    uint32_t  reactor_counts;
    uint32_t  reactor_types[HORMONE_REACTOR_MAX];
} HORDATA;

class VHormone
{
public:
  VHormone();
  ~VHormone();

private:
  uint32_t    m_hormone_identity;
  double      m_duration;
  uint32_t    m_reactor_life_counts;      // 0 to N
  uint32_t    m_reactor_counts;
  uint32_t    m_reactor_types[HORMONE_REACTOR_MAX];
};

class VHormoneGen
{
public:
  VHormoneGen();
  ~VHormoneGen();

private:

};
#endif // __VIRTUAL_EMOTION_HORMONE_GENESIS__
