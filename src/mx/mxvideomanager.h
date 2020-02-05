#ifndef MXVIDEOMANAGER_H
#define MXVIDEOMANAGER_H

#include "mxcore.h"
#include "mxpalette.h"
#include "mxrect32.h"
#include "mxresult.h"
#include "mxvideoparam.h"
#include "unknown/mxunknownmanager6.h"

/**
 * @brief The MxVideoManager class
 *
 * 0x64 bytes in size
 */
class MxVideoManager : public MxUnknownManager6 {
public:
  // 100BE1F0
  MxVideoManager();

  virtual ~MxVideoManager();

  // 100BE320
  void Init();

  void InvalidateRect(MxRect32&);

  virtual void vtable8(){}
  virtual void vtableC(){}
  virtual void vtable10(){}
  virtual void vtable14(){}
  virtual void vtable18(){}
  virtual void vtable1C(){}
  virtual void vtable20(){}
  virtual void vtable24(){}
  virtual void vtable28(){}

  virtual MxResult Create(MxVideoParam& p_param, int p_tickleInterval = 100, BOOL p_createThread = FALSE);

  virtual long RealizePalette(MxPalette*);

private:
  // +2C
  MxVideoParam video_param_;

  int unk50_;
  int unk54_;
  int unk58_;
  int unk5C_;
  unsigned char unk60_;
};

#endif // MXVIDEOMANAGER_H
