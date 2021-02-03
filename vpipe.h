#if !defined(__VIRTUAL_EMOTION_PIPE__)
#define __VIRTUAL_EMOTION_PIPE__

#pragma once

#include "vem.h"
#include "vemcell.h"
#include "vhorgen.h"

class VPipe
{
public:
    VPipe();
    ~VPipe();

private:
  uint32_t    m_type;
  VPipe*      m_prev;
  VPipe*      m_next;
  VCell*      m_reactor[];
  VHormone*   m_hormones[];
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
