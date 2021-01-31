#if !defined(__VIRTUAL_EMOTION__)
#define __VIRTUAL_EMOTION__

#pragma once

#include <pthread.h> // for mutex..

/**
  Created At 2021-01-26
  Author : Paul Cho
  E-mail : paul@coretrust.com
*/

typedef struct {
  int32_t   x;
  int32_t   y;
  int32_t   z;
} CELLPOS;

typedef struct {
  uint32_t  normal;   // RGB
  uint32_t  active;   // RGB
} CELLCOLOR;

typedef struct {
  int32_t   type;
  char      name[256];
  double    delta;
  uint32_t  nano;     // nano sec delay..
  uint32_t  now;      // current life
  CELLPOS   pos;      // centre
  CELLCOLOR color;
} CELLPROP;

class VInput
{

};

class VOutput
{

};

class VEnzyme
{
public:
  VEnzyme();
  ~VEnzyme();
};

class VCell
{
public:
  VCell();
  ~VCell();

  int       LoadCell(uint8_t data, int datalen);
  int       SaveCell(uint8_t data, int datalen);
  int       GetSize();
  int       SetLink(uint32_t cellid, uint32_t celltype);
  uint32_t  GetLink(uint32_t cellindex);
  uint32_t  GetLinkCount();
  void      Release();
  virtual   void SendSignal() = 0;
  virtual   void SetValue(double val) = 0;
private:
  char*       m_name;
  CELLPOS     m_pos;
  uint32_t    m_type;
  uint32_t    m_id;
  uint32_t    m_linkcount;
  uint32_t*   m_links;
  uint32_t*   m_linktypes;
  double      m_value;
  uint32_t    m_signaldelay;
};

class VFastCell : public VCell  // -0.01
{
public:
  VFastCell();
  ~VFastCell();
  virtual   void SendSignal();
};

class VSlowCell : public VCell  // -0.02
{
public:
  VFastCell();
  ~VFastCell();
  virtual   void SendSignal();
};

class VMemoryCell : public VCell // -0.00001
{
public:
  VMemoryCell();
  ~VMemoryCell();

  virtual   void SendSignal();
  virtual   void SetValue(double val);
};

class VRecallCell : public VCell
{
public:
  VRecallCell();
  ~VRecallCell();
};

class VTissue
{
public:
  VTissue();
  ~VTissue();

private:
  uint32_t  m_cellsize;
  uint32_t  m_type;
};

class VBrain
{
public:
  VBrain();
  ~VBrain();
};
#endif // __VIRTUAL_EMOTION__
