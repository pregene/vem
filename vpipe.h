#if !defined(__VIRTUAL_EMOTION_PIPE__)
#define __VIRTUAL_EMOTION_PIPE__

#pragma once

#include "vem.h"
#include "vemcell.h"
#include "vhorgen.h"

#define VPIPE_REACTION_MAX  10

class VPipe
{
public:
    VPipe();
    ~VPipe();

private:
  uint32_t    m_type;
  VPipe*      m_prev;
  VPipe*      m_next;
  VCell*      m_reactor[VPIPE_REACTION_MAX];
  VHormone*   m_hormones[VPIPE_REACTION_MAX];
};

class VPipeStream
{
public:
  VPipeStream();
  ~VPipeStream();

private:
  uint32_t    m_pipe_length;
  VPipe*      m_down_header;
  VPipe*      m_down_tail;
  VPipe*      m_up_header;
  VPipe*      m_up_tail;
};

#endif // __VIRTUAL_EMOTION_PIPE__
